// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSUSERACTION_H
#define CSUSERACTION_H

@class NSString, NSSet, NSArray, NSUUID, NSDictionary;
@protocol CSCoderEncoder, NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding>



@property (copy) NSString *contentAction; // ivar: _contentAction
@property NSUInteger eligibility; // ivar: _eligibility
@property (copy) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain) NSSet *keywords; // ivar: _keywords
@property (copy, nonatomic) NSArray *madeCurrentDates; // ivar: _madeCurrentDates
@property (copy, nonatomic) NSArray *madeCurrentEndDates; // ivar: _madeCurrentEndDates
@property (nonatomic) CGFloat madeCurrentInterval; // ivar: _madeCurrentInterval
@property (copy, nonatomic) NSArray *madeInitiallyCurrentDates; // ivar: _madeInitiallyCurrentDates
@property (copy, nonatomic) NSArray *sentToIndexerDates; // ivar: _sentToIndexerDates
@property (retain, nonatomic) NSUUID *uaIdentifier; // ivar: _uaIdentifier
@property (retain) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;


+(BOOL)supportsSecureCoding;
+(id)actionFromUserActivity:(id)arg0 searchableItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_propertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 searchableItem:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 ;
-(void)encodeWithCSCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithUserAction:(id)arg0 ;


@end


#endif