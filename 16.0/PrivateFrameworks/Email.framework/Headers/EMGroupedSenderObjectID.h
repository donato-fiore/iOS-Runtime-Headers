// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMGROUPEDSENDEROBJECTID_H
#define EMGROUPEDSENDEROBJECTID_H

@class NSString;
@protocol EMCollectionItemID;


#import "EMObjectID.h"
#import "EMGroupedSenderCollectionItemID.h"
#import "EMThreadScope.h"

@interface EMGroupedSenderObjectID : EMObjectID <EMCollectionItemID>



@property (readonly, nonatomic) EMGroupedSenderCollectionItemID *collectionItemID; // ivar: _collectionItemID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) EMThreadScope *filteredMailboxScope; // ivar: _filteredMailboxScope
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *simpleAddress;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionItemID:(id)arg0 filteredMailboxScope:(id)arg1 ;
-(id)initWithSimpleAddress:(id)arg0 filteredMailboxScope:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif