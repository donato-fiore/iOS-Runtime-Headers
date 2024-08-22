// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDDISCOVERUSERIDENTITIESURLREQUEST_H
#define CKDDISCOVERUSERIDENTITIESURLREQUEST_H

@class NSArray, NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *infosToDiscover; // ivar: _infosToDiscover
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (retain, nonatomic) NSMutableDictionary *submittedInfos; // ivar: _submittedInfos
@property (nonatomic) BOOL wantsProtectionInfo; // ivar: _wantsProtectionInfo


-(NSInteger)databaseScope;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 lookupInfos:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif