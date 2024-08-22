// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPCARDSECTIONFORFEEDBACK_H
#define _CPCARDSECTIONFORFEEDBACK_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _CPCardSectionForFeedback, NSSecureCoding;



@interface _CPCardSectionForFeedback : PBCodable <_CPCardSectionForFeedback, NSSecureCoding>



@property (copy, nonatomic) NSString *actionDestination; // ivar: _actionDestination
@property (copy, nonatomic) NSString *actionTarget; // ivar: _actionTarget
@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (copy, nonatomic) NSString *cardSectionDetail; // ivar: _cardSectionDetail
@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (nonatomic) int cardSectionType; // ivar: _cardSectionType
@property (copy, nonatomic) NSArray *cardSections; // ivar: _cardSections
@property (copy, nonatomic) NSString *commandDetail; // ivar: _commandDetail
@property (nonatomic) int commandType; // ivar: _commandType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultId; // ivar: _resultId
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)buttonsAtIndex:(NSUInteger)arg0 ;
-(id)cardSectionsAtIndex:(NSUInteger)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)addButtons:(id)arg0 ;
-(void)addCardSections:(id)arg0 ;
-(void)clearButtons;
-(void)clearCardSections;
-(void)writeTo:(id)arg0 ;


@end


#endif