// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMTIMEOUTROSTERPROVIDER_H
#define CRKASMTIMEOUTROSTERPROVIDER_H

@class NSMapTable;


#import "CRKASMRosterProviderDecoratorBase.h"

@interface CRKASMTimeoutRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) NSMapTable *completionsByTimer; // ivar: _completionsByTimer
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithRosterProvider:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)scheduleTimeoutForCompletion:(id)arg0 ;
-(void)createCourseWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)operationDidFinishWithTimer:(id)arg0 error:(id)arg1 ;
-(void)removeCourseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)timeoutDidFire:(id)arg0 ;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;


@end


#endif