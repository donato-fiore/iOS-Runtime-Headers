// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDWEBKITOPERATION_H
#define DDWEBKITOPERATION_H

@class WebFrame, DOMNode;


#import "DDOperation.h"

@interface DDWebKitOperation : DDOperation

@property (retain, nonatomic) WebFrame *container;
@property (retain, nonatomic) DOMNode *endNode; // ivar: _endNode
@property int endOffset; // ivar: _endOffset
@property (retain, nonatomic) DOMNode *startNode; // ivar: _startNode
@property int startOffset; // ivar: _startOffset


-(BOOL)_rangeValidForContainer;
-(BOOL)doURLificationOnDocument;
-(BOOL)needsToStartOver;
-(id)newOperationForContinuation;
-(id)newOperationForStartingOver;
-(struct __DDScanQuery *)_createScanQueryForBackend;
-(void)_applyContainerRestrictionsToTypes;
-(void)_updateGenerationNumber;
-(void)cleanup;
-(void)dispatchContainerModificationBlock:(id)arg0 ;


@end


#endif