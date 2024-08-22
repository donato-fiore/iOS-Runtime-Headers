// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSETTINGTRANSACTION_H
#define HMDSETTINGTRANSACTION_H

@class NSString, NSMutableSet;
@protocol HMDSettingTransaction;

#import <Foundation/Foundation.h>


@interface HMDSettingTransaction : NSObject <HMDSettingTransaction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL initialCreation; // ivar: _initialCreation
@property (readonly) NSMutableSet *removeUUIDs; // ivar: _removeUUIDs
@property (readonly) Class superclass;
@property (readonly) NSString *transactionLabel; // ivar: _transactionLabel
@property (readonly) NSMutableSet *updateModels; // ivar: _updateModels


-(id)initForInitialCreationWithTransactionLabel:(id)arg0 ;
-(id)initWithTransactionLabel:(id)arg0 ;
-(void)addModel:(id)arg0 ;
-(void)addModelToBeUpdated:(id)arg0 ;
-(void)addSettingModel:(id)arg0 ;
-(void)removeModelWithIdentifier:(id)arg0 ;


@end


#endif