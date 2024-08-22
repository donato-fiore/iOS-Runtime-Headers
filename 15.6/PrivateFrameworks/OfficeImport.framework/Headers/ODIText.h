// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODITEXT_H
#define ODITEXT_H


#import <Foundation/Foundation.h>


@interface ODIText : NSObject



+(id)baseListStyleForPoint:(id)arg0 shape:(id)arg1 isCentered:(BOOL)arg2 state:(id)arg3 ;
+(void)addTextFromPoint:(id)arg0 level:(unsigned int)arg1 includeChildren:(BOOL)arg2 toShape:(id)arg3 baseListStyle:(id)arg4 state:(id)arg5 ;
+(void)mapTextFromPoint:(id)arg0 toShape:(id)arg1 isCentered:(BOOL)arg2 includeChildren:(BOOL)arg3 state:(id)arg4 ;
+(void)mapTextFromPoint:(id)arg0 toShape:(id)arg1 isCenteredHorizontally:(BOOL)arg2 isCenteredVertically:(BOOL)arg3 includeChildren:(BOOL)arg4 state:(id)arg5 ;


@end


#endif