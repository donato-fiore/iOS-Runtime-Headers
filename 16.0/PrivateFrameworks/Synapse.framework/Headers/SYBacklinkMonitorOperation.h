// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYBACKLINKMONITOROPERATION_H
#define SYBACKLINKMONITOROPERATION_H

@class NSArray;
@protocol SYBacklinkMonitorOperationDelegate_Testing, SYBacklinkMonitorOperationDelegate, SYUserActivityInfo, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SYShowBacklinkIndicatorCommand.h"

@interface SYBacklinkMonitorOperation : NSObject

@property (retain, nonatomic) SYShowBacklinkIndicatorCommand *_indicatorCommand; // ivar: __indicatorCommand
@property (readonly, nonatomic) NSInteger _operationState;
@property (nonatomic, setter=_setOperationState:) NSInteger _operationState; // ivar: __operationState
@property (readonly, weak, nonatomic) NSObject<SYBacklinkMonitorOperationDelegate_Testing> *_testingDelegate; // ivar: __testingDelegate
@property (retain, nonatomic) NSArray *_testingForcedFoundDomainIdentifiers;
@property (retain, nonatomic) NSArray *_testingForcedFoundDomainIdentifiers; // ivar: __testingForcedFoundDomainIdentifiers
@property (retain, nonatomic) NSArray *_testingForcedFoundLinkedIdentifiers;
@property (retain, nonatomic) NSArray *_testingForcedFoundLinkedIdentifiers; // ivar: __testingForcedFoundLinkedIdentifiers
@property (readonly, weak, nonatomic) NSObject<SYBacklinkMonitorOperationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<SYUserActivityInfo> *inputUserActivityInfo;
@property (readonly, nonatomic) NSObject<SYUserActivityInfo> *inputUserActivityInfo; // ivar: _inputUserActivityInfo
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSInteger type;


-(id)description;
-(id)initWithDelegate:(id)arg0 processingQueue:(id)arg1 inputUserActivityInfo:(id)arg2 processIdentifier:(int)arg3 ;
-(void)_finishProcessingAndNotify;
-(void)_searchBacklinksForInputUserActivity;
-(void)_showOrHideBacklinkIndicatorForDomainIdentifiers:(id)arg0 linkedIdentifiers:(id)arg1 ;
-(void)beginProcessing;


@end


#endif