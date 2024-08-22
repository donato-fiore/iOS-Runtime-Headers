// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UNCNCONTACTRESOLVERRESULT_H
#define _UNCNCONTACTRESOLVERRESULT_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface _UNCNContactResolverResult : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSString *cnContactFullname; // ivar: _cnContactFullname
@property (readonly, copy, nonatomic) NSString *cnContactIdentifier; // ivar: _cnContactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifierOfMatchLabel; // ivar: _identifierOfMatchLabel
@property (readonly, nonatomic) NSUInteger matchType; // ivar: _matchType
@property (readonly, nonatomic, getter=isMatchTypeSuggested) BOOL matchTypeSuggested; // ivar: _matchTypeSuggested
@property (readonly, nonatomic, getter=isStrongestMatch) BOOL strongestMatch;
@property (readonly, nonatomic, getter=isSuggestedContact) BOOL suggestedContact; // ivar: _suggestedContact
@property (readonly) Class superclass;


+(id)resultWithCNContactIdentifier:(id)arg0 cnContactFullname:(id)arg1 suggestedContact:(BOOL)arg2 matchType:(NSUInteger)arg3 matchTypeSuggested:(BOOL)arg4 identifierOfMatchLabel:(id)arg5 ;
-(BOOL)isStrongerMatchThanOtherMatch:(id)arg0 ;
-(id)_initWithCNContactIdentifier:(id)arg0 cnContactFullname:(id)arg1 suggestedContact:(BOOL)arg2 matchType:(NSUInteger)arg3 matchTypeSuggested:(BOOL)arg4 identifierOfMatchLabel:(id)arg5 ;
-(id)_stringForMatchType:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif