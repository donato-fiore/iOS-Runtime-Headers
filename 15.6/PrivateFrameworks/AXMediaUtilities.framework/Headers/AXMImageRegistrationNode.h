// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMIMAGEREGISTRATIONNODE_H
#define AXMIMAGEREGISTRATIONNODE_H

@protocol NSSecureCoding;


#import "AXMEvaluationNode.h"
#import "AXMPipelineContextInput.h"

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding>

 {
    AXMPipelineContextInput *_previousInput;
    AXMPipelineContextInput *_currentInput;
    CGPoint _transpositionHistoryCircularBuffer;
    NSUInteger _transpositionHistoryLastRecordedIndex;
    BOOL _fillingHistoryBuffer;
    NSInteger _registrationState;
}


@property (readonly, nonatomic) NSInteger registrationState;


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)requiresVisionFramework;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)_translationalImageRegistrationRequestForInput:(id)arg0 ;
-(void)_recordTransposition:(struct CGPoint )arg0 ;
-(void)_resetImageRegistration;
-(void)_resetTranspositionHistory;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif