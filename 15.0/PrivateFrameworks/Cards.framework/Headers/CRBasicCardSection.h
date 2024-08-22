// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRBASICCARDSECTION_H
#define CRBASICCARDSECTION_H

@class NSArray, NSString;
@protocol CRCardSection, SFCardSection;

#import <Foundation/Foundation.h>


@interface CRBasicCardSection : NSObject <CRCardSection>



@property (readonly, nonatomic) NSArray *actionCommands;
@property (retain, nonatomic) NSObject<SFCardSection> *backingCardSection; // ivar: _backingCardSection
@property (readonly, nonatomic) NSString *cardSectionIdentifier; // ivar: _cardSectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasNextCard;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)basicCardSectionWithBackingCardSection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif