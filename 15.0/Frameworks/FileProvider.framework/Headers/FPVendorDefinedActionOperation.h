// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPVENDORDEFINEDACTIONOPERATION_H
#define FPVENDORDEFINEDACTIONOPERATION_H

@class NSProgress, NSString, NSArray;


#import "FPActionOperation.h"

@interface FPVendorDefinedActionOperation : FPActionOperation {
    NSProgress *_remoteProgress;
    NSString *_actionIdentifier;
    NSArray *_itemIdentifiers;
    NSString *_domainIdentifier;
}




-(id)initWithActionIdentifier:(id)arg0 providerDomainID:(id)arg1 itemIdentifiers:(id)arg2 ;
-(void)actionMain;
-(void)cancel;


@end


#endif