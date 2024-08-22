// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPARTIALNETWORKDATACONSUMER_H
#define MFPARTIALNETWORKDATACONSUMER_H

@class NSData, NSString;
@protocol MFDataConsumer, MFGuaranteedCollectingDataConsumer;

#import <Foundation/Foundation.h>


@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer>

 {
    id<MFGuaranteedCollectingDataConsumer> *_rawDataConsumer;
    NSData *_strippedData;
    NSUInteger _length;
    BOOL _seenNetworkLineEndings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)appendData:(id)arg0 ;
-(NSUInteger)length;
-(id)copyDataWithUnixLineEndings;
-(id)data;
-(id)init;
-(void)dealloc;
-(void)done;
-(void)purge;


@end


#endif