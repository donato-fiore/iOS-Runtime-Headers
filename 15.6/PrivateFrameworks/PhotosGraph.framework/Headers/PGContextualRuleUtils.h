// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCONTEXTUALRULEUTILS_H
#define PGCONTEXTUALRULEUTILS_H


#import <Foundation/Foundation.h>


@interface PGContextualRuleUtils : NSObject



+(id)dayHighlightContainingAsset:(id)arg0 ;
+(id)onThisDayLocalDateForYearHighlight:(id)arg0 withOptions:(id)arg1 ;
+(void)returnContextualKeyAssetForHighlightNode:(id)arg0 yearHighlight:(id)arg1 score:(CGFloat)arg2 inPhotoLibrary:(id)arg3 loggingConnection:(id)arg4 usingBlock:(id)arg5 ;


@end


#endif