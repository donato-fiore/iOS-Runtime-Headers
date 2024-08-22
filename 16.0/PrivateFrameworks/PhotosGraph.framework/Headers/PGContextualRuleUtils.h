// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCONTEXTUALRULEUTILS_H
#define PGCONTEXTUALRULEUTILS_H


#import <Foundation/Foundation.h>


@interface PGContextualRuleUtils : NSObject



+(id)dayHighlightContainingAsset:(id)arg0 ;
+(id)onThisDayLocalDateForYearHighlight:(id)arg0 withOptions:(id)arg1 ;
+(void)returnContextualKeyAssetForHighlightNode:(id)arg0 yearHighlight:(id)arg1 sharingFilter:(unsigned short)arg2 score:(CGFloat)arg3 inPhotoLibrary:(id)arg4 loggingConnection:(id)arg5 usingBlock:(id)arg6 ;


@end


#endif