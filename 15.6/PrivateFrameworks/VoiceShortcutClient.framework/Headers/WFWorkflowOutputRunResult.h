// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWOUTPUTRUNRESULT_H
#define WFWORKFLOWOUTPUTRUNRESULT_H

@class NSData, WFContentCollection;


#import "WFWorkflowRunResult.h"

@interface WFWorkflowOutputRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) NSData *archivedOutput; // ivar: _archivedOutput
@property (retain, nonatomic) WFContentCollection *cachedOutput; // ivar: _cachedOutput
@property (readonly, nonatomic) BOOL hasOutput;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)generateRepresentationFromOutput:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOutput:(id)arg0 ;
-(id)initWithOutput:(id)arg0 runError:(id)arg1 ;
-(id)resultBySettingError:(id)arg0 ;
-(id)unableToDecodeError;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateOutputFromRepresentation:(id)arg0 withCompletion:(id)arg1 ;
-(void)getOutputWithCompletionHandler:(id)arg0 ;


@end


#endif