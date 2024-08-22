// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTAINERSCHEMAACTIONMOVE_H
#define MCMCONTAINERSCHEMAACTIONMOVE_H

@class NSURL;
@protocol MCMContainerSchemaActionHasSourceAndDestination;


#import "MCMContainerSchemaActionBase.h"

@interface MCMContainerSchemaActionMove : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination>

 {
    NSURL *_sourceURL;
    NSURL *_destURL;
}




+(id)actionIdentifier;
-(BOOL)performWithError:(*id)arg0 ;
-(id)description;
-(id)initWithSourcePathArgument:(id)arg0 destinationPathArgument:(id)arg1 context:(id)arg2 ;


@end


#endif