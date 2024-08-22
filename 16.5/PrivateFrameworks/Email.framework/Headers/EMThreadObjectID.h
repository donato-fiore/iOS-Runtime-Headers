// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMTHREADOBJECTID_H
#define EMTHREADOBJECTID_H

@class NSString;
@protocol EFPubliclyDescribable;


#import "EMObjectID.h"
#import "EMThreadCollectionItemID.h"
#import "EMThreadScope.h"

@interface EMThreadObjectID : EMObjectID <EFPubliclyDescribable>



@property (readonly, nonatomic) EMThreadCollectionItemID *collectionItemID; // ivar: _collectionItemID
@property (readonly, nonatomic) NSInteger conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) EMThreadScope *threadScope; // ivar: _threadScope


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionItemID:(id)arg0 threadScope:(id)arg1 ;
-(id)initWithConversationID:(NSInteger)arg0 threadScope:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif