// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMLINKEDACCOUNT_H
#define EDAMLINKEDACCOUNT_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMLinkedAccount : FATObject

@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSNumber *inAccountUserId; // ivar: _inAccountUserId
@property (retain, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl
@property (retain, nonatomic) NSString *shardId; // ivar: _shardId
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum
@property (retain, nonatomic) NSString *webApiUrlPrefix; // ivar: _webApiUrlPrefix


+(id)structFields;
+(id)structName;


@end


#endif