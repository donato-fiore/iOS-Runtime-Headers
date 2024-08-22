// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OABWORDART_H
#define OABWORDART_H


#import <Foundation/Foundation.h>


@interface OABWordArt : NSObject



+(unsigned char)readTextAlignment:(int)arg0 ;
+(void)readFromShapeManager:(id)arg0 toCharacterProperties:(id)arg1 state:(id)arg2 ;
+(void)readFromShapeManager:(id)arg0 toShape:(id)arg1 state:(id)arg2 ;


@end


#endif