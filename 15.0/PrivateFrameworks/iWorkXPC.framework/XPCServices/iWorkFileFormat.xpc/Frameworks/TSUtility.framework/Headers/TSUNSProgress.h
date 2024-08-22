// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUNSPROGRESS_H
#define TSUNSPROGRESS_H

@class NSProgress, NSArray;


#import "TSUProgress.h"

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}




-(BOOL)isIndeterminate;
-(CGFloat)maxValue;
-(CGFloat)value;
-(id)init;
-(id)initForSubclass;
-(id)initWithNSProgress:(id)arg0 ;
-(id)message;
-(void)setMessage:(id)arg0 ;


@end


#endif