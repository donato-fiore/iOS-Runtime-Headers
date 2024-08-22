// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSCONTROLLER_H
#define STSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface STSController : NSObject {
    *OpaqueFigSTS _sts;
    unordered_map<std::string, STSPerLabelControllerState, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, STSPerLabelControllerState>>> _perLabelState;
    stack<unsigned long, std::deque<unsigned long>> _availableIndicesWithinSharedStorage;
    STSActiveIndices _activeIndices;
    STSGlobalState _globalState;
    NSUInteger _globalGeneration;
    *void _sharedStorage;
    semaphore _controlSemaphore;
    NSUInteger _shmemSize;
}




+(NSInteger)maxNumberOfPerLabelStates;
+(NSUInteger)maxLabelLength;
-(BOOL)_updateGlobalState:(struct STSGlobalState *)arg0 didChange:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)signalChangeWithError:(*id)arg0 ;
-(BOOL)updateGlobalState:(struct STSGlobalState *)arg0 didChange:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updateGlobalState:(struct STSGlobalState *)arg0 labelStates:(*void)arg1 additionalLabelInfo:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateGlobalState:(struct STSGlobalState *)arg0 labelStates:(*void)arg1 error:(*id)arg2 ;
-(BOOL)updateLabel:(struct __CFString *)arg0 state:(struct STSPerLabelState *)arg1 didChange:(*BOOL)arg2 additionalInfo:(id)arg3 error:(*id)arg4 ;
-(BOOL)updateLabel:(struct __CFString *)arg0 state:(struct STSPerLabelState *)arg1 didChange:(*BOOL)arg2 error:(*id)arg3 ;
-(id)initWithSTSObject:(struct OpaqueFigSTS *)arg0 error:(*id)arg1 ;
-(struct __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>> )ensureResourcesAllocatedForLabel:(struct __CFString *)arg0 error:(*id)arg1 ;
-(void)cleanupAllLabels;
-(void)cleanupLabel:(struct __CFString *)arg0 ;
-(void)dealloc;


@end


#endif