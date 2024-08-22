// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTFINDREPLACE_H
#define TSTFINDREPLACE_H


#import <Foundation/Foundation.h>


@interface TSTFindReplace : NSObject



+(void)p_searchInfo:(id)arg0 layout:(id)arg1 forAnnotationsWithHitBlock:(id)arg2 ;
+(void)searchInfo:(id)arg0 forAnnotationsWithHitBlock:(id)arg1 ;
+(void)searchInfo:(id)arg0 forString:(id)arg1 options:(NSUInteger)arg2 hitBlock:(id)arg3 ;
+(void)searchLayout:(id)arg0 forAnnotationsWithHitBlock:(id)arg1 ;
// +(void)searchLayout:(id)arg0 forSpellingErrorsWithHitBlock:(id)arg1 stop:(unk)arg2  ;
+(void)searchLayout:(id)arg0 forString:(id)arg1 options:(NSUInteger)arg2 hitBlock:(id)arg3 ;


@end


#endif