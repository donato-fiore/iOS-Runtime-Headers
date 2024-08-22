// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFBUFFEREDDATACONSUMER_H
#define MFBUFFEREDDATACONSUMER_H

@class NSMutableData, NSString;
@protocol MFGuaranteedCollectingDataConsumer;

#import <Foundation/Foundation.h>


@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>

 {
    NSMutableData *_data;
    int _fd;
    NSString *_path;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)appendData:(id)arg0 ;
-(id)data;
-(id)init;
-(void)dealloc;
-(void)done;


@end


#endif