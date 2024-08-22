// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDTEXTKITOPERATION_H
#define DDTEXTKITOPERATION_H

@class UITextView;


#import "DDOperation.h"

@interface DDTextKitOperation : DDOperation {
    int _editCount;
}


@property (retain, nonatomic) UITextView *container;
@property _NSRange range; // ivar: _range


-(BOOL)doURLificationOnDocument;
-(BOOL)needsToStartOver;
-(id)initWithContainer:(id)arg0 ;
-(id)newOperationForContinuation;
-(id)newOperationForStartingOver;
-(struct _NSRange )_addResultToAttributes:(id)arg0 inStorage:(id)arg1 editing:(BOOL)arg2 ;
-(struct _NSRange )_addResultsToAttributesInStorage:(id)arg0 ;
-(struct __DDScanQuery *)_createScanQueryForBackend;
-(void)_updateGenerationNumber;
-(void)cleanup;
-(void)dispatchContainerModificationBlock:(id)arg0 ;
-(void)textDidChange:(id)arg0 ;


@end


#endif