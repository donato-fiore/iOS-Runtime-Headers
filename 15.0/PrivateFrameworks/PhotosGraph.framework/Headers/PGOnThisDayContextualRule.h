// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGONTHISDAYCONTEXTUALRULE_H
#define PGONTHISDAYCONTEXTUALRULE_H

@class NSString;
@protocol PGContextualRule;

#import <Foundation/Foundation.h>


@interface PGOnThisDayContextualRule : NSObject <PGContextualRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canProvideContextualKeyAssetsWithOptions:(id)arg0 ;
-(id)_contextualKeyAssetForDayHighlightItem:(id)arg0 contextualLocalDate:(id)arg1 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg0 withOptions:(id)arg1 modelReader:(id)arg2 curationContext:(id)arg3 usingBlock:(id)arg4 ;


@end


#endif