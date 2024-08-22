// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSHOWCONTACTCARDCOMMAND_H
#define SFSHOWCONTACTCARDCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFShowContactCardCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFShowContactCardCommand : SFCommand <SFShowContactCardCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSuggestedContact; // ivar: _isSuggestedContact
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasIsSuggestedContact;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif