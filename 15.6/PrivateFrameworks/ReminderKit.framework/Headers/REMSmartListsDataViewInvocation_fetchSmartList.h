// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSMARTLISTSDATAVIEWINVOCATION_FETCHSMARTLIST_H
#define REMSMARTLISTSDATAVIEWINVOCATION_FETCHSMARTLIST_H

@class NSString;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding>



@property (nonatomic) BOOL createIfNeeded; // ivar: _createIfNeeded
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) NSString *smartListType; // ivar: _smartListType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSmartListType:(id)arg0 objectID:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif