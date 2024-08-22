// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCONTROLLER_H
#define STSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface STSController : NSObject {
    *OpaqueFigSTS _sts;
    unordered_map<std::string, STSPerLabelControllerState, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, STSPerLabelControllerState>>> _perLabelState;
    stack<unsigned long, std::deque<unsigned long>> _availableIndicesWithinSharedStorage;
    STSGlobalState _globalState;
    *STSSharedStorage _sharedStorage;
}




+(NSInteger)maxNumberOfPerLabelStates;
-(BOOL)lock:(struct _opaque_pthread_mutex_t *)arg0 error:(*id)arg1 ;
-(BOOL)unlock:(struct _opaque_pthread_mutex_t *)arg0 error:(*id)arg1 ;
-(BOOL)updateGlobalState:(struct STSGlobalState *)arg0 didChange:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updateGlobalState:(struct STSGlobalState *)arg0 hasLock:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updateGlobalState:(struct STSGlobalState *)arg0 labelStates:(*void)arg1 error:(*id)arg2 ;
-(BOOL)updateLabel:(struct __CFString *)arg0 state:(struct STSPerLabelState *)arg1 didChange:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)updateLabel:(struct __CFString *)arg0 state:(struct STSPerLabelState *)arg1 hasLock:(*BOOL)arg2 error:(*id)arg3 ;
-(id)initWithSTSObject:(struct OpaqueFigSTS *)arg0 error:(*id)arg1 ;
-(struct __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>> )ensureResourcesAllocatedForLabel:(struct __CFString *)arg0 error:(*id)arg1 ;
-(void)cleanupAllLabels;
-(void)cleanupLabel:(struct __CFString *)arg0 ;
-(void)dealloc;


@end


#endif