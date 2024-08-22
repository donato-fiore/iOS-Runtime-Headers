// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)_contextualKeyAssetForDayHighlightItem:(id)arg0 contextualLocalDate:(id)arg1 sharingFilter:(unsigned short)arg2 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg0 sharingFilter:(unsigned short)arg1 withOptions:(id)arg2 modelReader:(id)arg3 curationContext:(id)arg4 usingBlock:(id)arg5 ;


@end


#endif