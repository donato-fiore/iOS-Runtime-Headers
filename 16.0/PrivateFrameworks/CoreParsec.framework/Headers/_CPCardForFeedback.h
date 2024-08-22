// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPCARDFORFEEDBACK_H
#define _CPCARDFORFEEDBACK_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _CPCardForFeedback, NSSecureCoding;



@interface _CPCardForFeedback : PBCodable <_CPCardForFeedback, NSSecureCoding>



@property (copy, nonatomic) NSArray *cardSections; // ivar: _cardSections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)cardSectionsAtIndex:(NSUInteger)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)addCardSections:(id)arg0 ;
-(void)clearCardSections;
-(void)writeTo:(id)arg0 ;


@end


#endif