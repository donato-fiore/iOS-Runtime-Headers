// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EAREDITDISTANCE_H
#define _EAREDITDISTANCE_H


#import <Foundation/Foundation.h>


@interface _EAREditDistance : NSObject



-(id)editDistanceWithRefText:(id)arg0 hypText:(id)arg1 caseInsensitive:(BOOL)arg2 removeWordSense:(BOOL)arg3 ;
-(id)editDistanceWithRefTokens:(id)arg0 hypTokens:(id)arg1 caseInsensitive:(BOOL)arg2 removeWordSense:(BOOL)arg3 ;
-(void)editAlignmentWithRefText:(id)arg0 hypText:(id)arg1 placeholderSymbol:(id)arg2 caseInsensitive:(BOOL)arg3 removeWordSense:(BOOL)arg4 completion:(id)arg5 ;
-(void)editAlignmentWithRefTokens:(id)arg0 hypTokens:(id)arg1 placeholderSymbol:(id)arg2 caseInsensitive:(BOOL)arg3 removeWordSense:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif