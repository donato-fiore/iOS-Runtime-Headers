// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRBASICCARD_H
#define CRBASICCARD_H

@class SFCard, NSString, NSArray, NSSet;
@protocol CRCard;

#import <Foundation/Foundation.h>


@interface CRBasicCard : NSObject <CRCard>



@property (readonly, nonatomic) BOOL asynchronous;
@property (readonly, nonatomic) SFCard *backingCard;
@property (readonly, nonatomic) NSUInteger cardFormat; // ivar: cardFormat
@property (readonly, copy, nonatomic) NSString *cardIdentifier; // ivar: _cardIdentifier
@property (retain, nonatomic) NSArray *cardSections; // ivar: _cardSections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dismissalCommands; // ivar: _dismissalCommands
@property (readonly, nonatomic) BOOL flexibleSectionOrder;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *interactions; // ivar: _interactions
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadCardWithCompletion:(id)arg0 ;


@end


#endif