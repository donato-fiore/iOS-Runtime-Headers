// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERSCHEMAACTIONSYMLINK_H
#define MCMCONTAINERSCHEMAACTIONSYMLINK_H

@class NSURL, NSString;
@protocol MCMContainerSchemaActionHasSourceAndDestination;


#import "MCMContainerSchemaActionBase.h"

@interface MCMContainerSchemaActionSymlink : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination>

 {
    NSURL *_linkURL;
    NSString *_targetPath;
}




+(id)actionIdentifier;
-(BOOL)performWithError:(*id)arg0 ;
-(id)description;
-(id)initWithSourcePathArgument:(id)arg0 destinationPathArgument:(id)arg1 context:(id)arg2 ;


@end


#endif