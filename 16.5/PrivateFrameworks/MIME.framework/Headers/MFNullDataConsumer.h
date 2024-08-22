// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFNULLDATACONSUMER_H
#define MFNULLDATACONSUMER_H

@class NSString;
@protocol MFDataConsumer;

#import <Foundation/Foundation.h>


@interface MFNullDataConsumer : NSObject <MFDataConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)appendData:(id)arg0 ;
-(void)done;


@end


#endif