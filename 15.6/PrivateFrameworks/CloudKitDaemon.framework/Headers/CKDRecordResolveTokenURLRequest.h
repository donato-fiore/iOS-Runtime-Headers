// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDRECORDRESOLVETOKENURLREQUEST_H
#define CKDRECORDRESOLVETOKENURLREQUEST_H

@class NSArray, NSMutableDictionary, NSSet;


#import "CKDURLRequest.h"

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *lookupInfos; // ivar: _lookupInfos
@property (retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID; // ivar: _lookupInfosByRequestID
@property (retain, nonatomic) NSSet *rootRecordDesiredKeySet; // ivar: _rootRecordDesiredKeySet
@property (nonatomic) BOOL shouldFetchRootRecord; // ivar: _shouldFetchRootRecord
@property (copy, nonatomic) id *tokenResolveBlock; // ivar: _tokenResolveBlock


-(BOOL)requiresCKAnonymousUserIDs;
-(BOOL)sendRequestAnonymously;
-(NSInteger)databaseScope;
-(id)applicationBundleIdentifierForContainerAccess;
-(id)applicationBundleIdentifierForNetworkAttribution;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 shortTokenLookupInfos:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)sourceApplicationSecondaryIdentifier;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif