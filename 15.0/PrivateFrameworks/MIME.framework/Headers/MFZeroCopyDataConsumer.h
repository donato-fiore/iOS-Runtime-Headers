// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFZEROCOPYDATACONSUMER_H
#define MFZEROCOPYDATACONSUMER_H

@class NSString;
@protocol MFGuaranteedCollectingDataConsumer;

#import <Foundation/Foundation.h>

#import "MFDataHolder.h"

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>

 {
    MFDataHolder *_dataHolder;
    BOOL _done;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)appendData:(id)arg0 ;
-(id)data;
-(id)init;
-(void)done;


@end


#endif