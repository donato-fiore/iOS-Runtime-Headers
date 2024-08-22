// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSUBJECTRELIGHTINGCALCULATORRESULT_H
#define BWSUBJECTRELIGHTINGCALCULATORRESULT_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface BWSubjectRelightingCalculatorResult : NSObject {
    BOOL _relightingRequired;
    float _curveParameter;
    NSObject<OS_dispatch_group> *_group;
    os_unfair_lock_s _lock;
}


@property (readonly) float curveParameter;
@property (readonly) BOOL relightingRequired;


-(BOOL)waitForResult;
-(id)init;
-(void)_completeWithRelightingRequired:(BOOL)arg0 curveParameter:(float)arg1 ;
-(void)dealloc;


@end


#endif