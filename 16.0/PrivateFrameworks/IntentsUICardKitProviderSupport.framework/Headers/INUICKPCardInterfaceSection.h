// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INUICKPCARDINTERFACESECTION_H
#define INUICKPCARDINTERFACESECTION_H

@class INUIInterfaceSection, NSString, NSSet;
@protocol INUICKPInterfaceSectionModeling, CRCardSection;



@interface INUICKPCardInterfaceSection : INUIInterfaceSection <INUICKPInterfaceSectionModeling>



@property (retain, nonatomic) NSObject<CRCardSection> *cardSection; // ivar: _cardSection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger interactiveBehavior;
@property (readonly, nonatomic) BOOL isWildCardSection;
@property (copy, nonatomic) NSSet *parameters; // ivar: _cardSectionParameters
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithInteractiveBehavior:(NSUInteger)arg0 parameters:(id)arg1 ;


@end


#endif