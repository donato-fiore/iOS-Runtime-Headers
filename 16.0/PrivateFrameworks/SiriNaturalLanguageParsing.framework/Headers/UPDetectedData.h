// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPDETECTEDDATA_H
#define UPDETECTEDDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UPDetectedData : NSObject

@property (readonly) *__CFArray dataDetectorResult; // ivar: _dataDetectorResult
@property (readonly, copy) NSString *label; // ivar: _label


-(id)initWithLabel:(id)arg0 dataDetectorResult:(struct __CFArray *)arg1 ;
-(void)dealloc;


@end


#endif