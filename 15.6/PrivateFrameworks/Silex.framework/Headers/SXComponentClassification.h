// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTCLASSIFICATION_H
#define SXCOMPONENTCLASSIFICATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SXComponentLayoutRules.h"
#import "SXComponentTextRules.h"

@interface SXComponentClassification : NSObject

@property (readonly, nonatomic) NSUInteger contentRelevance;
@property (readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property (readonly, nonatomic) NSArray *defaultStyleIdentifiers; // ivar: _defaultStyleIdentifiers
@property (readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property (readonly, nonatomic) SXComponentLayoutRules *layoutRules; // ivar: _layoutRules
@property (readonly, nonatomic) SXComponentTextRules *textRules; // ivar: _textRules


+(BOOL)shouldRegister;
+(id)classificationForComponentWithRole:(int)arg0 ;
+(id)classificationForComponentWithType:(id)arg0 ;
+(id)classificationForComponentWithType:(id)arg0 role:(id)arg1 ;
+(id)roleString;
+(id)typeString;
+(int)role;
+(void)initialize;
+(void)registerClassification;
-(BOOL)accessibilitySkippedDuringReadAll;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(BOOL)isCollapsible;
-(Class)componentModelClass;
-(id)accessibilityContextualLabel;
-(id)accessibilityCustomRotorMembership;
-(id)init;
-(void)setupStyleIdentifiers;


@end


#endif