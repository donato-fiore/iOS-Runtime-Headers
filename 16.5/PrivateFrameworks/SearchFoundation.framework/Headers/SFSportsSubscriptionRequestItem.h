// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSPORTSSUBSCRIPTIONREQUESTITEM_H
#define SFSPORTSSUBSCRIPTIONREQUESTITEM_H

@class NSString, NSDictionary, NSData;
@protocol SFSportsSubscriptionRequestItem, NSSecureCoding, NSCopying;


#import "SFDomainSubscriptionRequestItem.h"

@interface SFSportsSubscriptionRequestItem : SFDomainSubscriptionRequestItem <SFSportsSubscriptionRequestItem, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *canonicalIdentifier; // ivar: _canonicalIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *leagueIdentifier; // ivar: _leagueIdentifier
@property (copy, nonatomic) NSString *sportIdentifier; // ivar: _sportIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif