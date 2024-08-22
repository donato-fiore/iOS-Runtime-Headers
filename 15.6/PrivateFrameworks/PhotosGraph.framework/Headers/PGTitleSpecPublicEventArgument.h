// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTITLESPECPUBLICEVENTARGUMENT_H
#define PGTITLESPECPUBLICEVENTARGUMENT_H



#import "PGTitleSpecArgument.h"

@interface PGTitleSpecPublicEventArgument : PGTitleSpecArgument

@property (readonly, nonatomic) BOOL shouldUseLongPublicEventTitle; // ivar: _shouldUseLongPublicEventTitle
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)_cleanUpEventName:(id)arg0 ;
+(id)argumentWithPublicEventType:(NSUInteger)arg0 ;
+(id)argumentWithPublicEventType:(NSUInteger)arg0 shouldUseLongPublicEventTitle:(BOOL)arg1 ;
-(id)_commonPublicEventNodeForMomentNodes:(id)arg0 ;
-(id)_generateTitleWithBusinessNameForPublicEventNode:(id)arg0 ;
-(id)_generateTitleWithCategoryNameForPublicEventNode:(id)arg0 ;
-(id)_generateTitleWithEventNameForPublicEventNode:(id)arg0 ;
-(id)_generateTitleWithPerformerNamesForPublicEventNode:(id)arg0 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 features:(id)arg1 argumentEvaluationContext:(id)arg2 ;
-(id)_resolvedStringWithPublicEventNode:(id)arg0 inMomentNodes:(id)arg1 ;
-(id)initWithPublicEventType:(NSUInteger)arg0 ;
-(id)initWithPublicEventType:(NSUInteger)arg0 shouldUseLongPublicEventTitle:(BOOL)arg1 ;


@end


#endif