// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYBASELINEOPERATION_H
#define PFUBIQUITYBASELINEOPERATION_H

@class NSString;


#import "PFUbiquityImportOperation.h"
#import "NSManagedObjectModel.h"

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
}




-(id)description;
-(id)initWithPersistentStore:(id)arg0 localPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)dealloc;


@end


#endif