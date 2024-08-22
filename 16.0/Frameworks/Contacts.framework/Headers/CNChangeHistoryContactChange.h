// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGEHISTORYCONTACTCHANGE_H
#define CNCHANGEHISTORYCONTACTCHANGE_H

@class NSNumber, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNChangeHistoryAnchor.h"
#import "CNContact.h"

@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding>



@property (retain, nonatomic) CNChangeHistoryAnchor *changeAnchor; // ivar: _changeAnchor
@property (retain, nonatomic) NSNumber *changeID; // ivar: _changeID
@property (nonatomic) NSInteger changeType; // ivar: _changeType
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) NSString *externalID; // ivar: _externalID
@property (retain, nonatomic) NSString *externalModificationTag; // ivar: _externalModificationTag
@property (retain, nonatomic) NSString *externalURI; // ivar: _externalURI
@property (retain, nonatomic) NSNumber *imagesChanged; // ivar: _imagesChanged
@property (retain, nonatomic) NSString *linkToPersonUUID; // ivar: _linkToPersonUUID
@property (copy, nonatomic) NSArray *linkedContactIdentifiers; // ivar: _linkedContactIdentifiers
@property (retain, nonatomic) NSString *personLinkUUID; // ivar: _personLinkUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 changeType:(NSInteger)arg1 changeAnchor:(id)arg2 changeID:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 changeType:(NSInteger)arg1 changeAnchor:(id)arg2 changeID:(id)arg3 externalID:(id)arg4 imagesChanged:(id)arg5 linkToPersonUUID:(id)arg6 personLinkUUID:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif