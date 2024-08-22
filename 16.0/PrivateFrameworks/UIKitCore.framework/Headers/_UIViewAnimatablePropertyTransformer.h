// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWANIMATABLEPROPERTYTRANSFORMER_H
#define _UIVIEWANIMATABLEPROPERTYTRANSFORMER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UICompoundObjectMap.h"

@interface _UIViewAnimatablePropertyTransformer : NSObject {
    BOOL _presentationValueCallbackRan;
    NSObject<OS_dispatch_queue> *_lockingQueue;
}


@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties; // ivar: _capturedProperties
@property (copy, nonatomic) id *modelValueChangedCallback; // ivar: _modelValueChangedCallback
@property (copy, nonatomic) id *presentationValueChangedCallback; // ivar: _presentationValueChangedCallback
@property (retain, nonatomic) NSMutableSet *runningProgresses; // ivar: _runningProgresses
@property (copy, nonatomic) id *stabilizedCallback; // ivar: _stabilizedCallback


// -(id)initWithInputAnimatableProperties:(id)arg0 modelValueSetter:(id)arg1 presentationValueSetter:(unk)arg2  ;
// -(id)initWithInputAnimatableProperties:(id)arg0 modelValueSetter:(id)arg1 presentationValueSetter:(unk)arg2 stabilizedCallback:(id)arg3  ;
// -(id)initWithInputAnimatableProperties:(id)arg0 modelValueSetter:(id)arg1 presentationValueSetter:(unk)arg2 stabilizedCallback:(id)arg3 allowsProgressAnimatableProperties:(unk)arg4  ;
-(id)initWithInputAnimatableProperties:(id)arg0 presentationValueChangedCallback:(id)arg1 ;
// -(id)initWithProgressAnimatableProperty:(id)arg0 modelValueSetter:(id)arg1 presentationValueSetter:(unk)arg2  ;
-(void)modelValueUpdatedForProgress:(id)arg0 ;
-(void)performWithLock:(id)arg0 ;
-(void)presentationValueStabilizedForProgress:(id)arg0 ;
-(void)presentationValueUpdatedForProgress:(id)arg0 ;
-(void)progressInvalidated:(id)arg0 ;


@end


#endif