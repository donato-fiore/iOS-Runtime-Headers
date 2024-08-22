// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUILEGACYCARDSECTION_H
#define SIRIUILEGACYCARDSECTION_H

@class NSArray, NSString;
@protocol CRCardSection, SFCardSection;

#import <Foundation/Foundation.h>


@interface SiriUILegacyCardSection : NSObject <CRCardSection>



@property (readonly, nonatomic) NSArray *actionCommands;
@property (readonly, nonatomic) NSObject<SFCardSection> *backingCardSection;
@property (retain, nonatomic) NSString *cardSectionIdentifier; // ivar: _cardSectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasNextCard;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif