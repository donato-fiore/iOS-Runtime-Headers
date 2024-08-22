// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHOWSFCARDCOMMAND_H
#define SFSHOWSFCARDCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFShowSFCardCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFCard.h"
#import "SFTopic.h"

@interface SFShowSFCardCommand : SFCommand <SFShowSFCardCommand, NSSecureCoding, NSCopying>



@property (retain, nonatomic) SFCard *card; // ivar: _card
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)embeddedCards;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif