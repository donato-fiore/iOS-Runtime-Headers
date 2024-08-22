// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBTABLEROWPROPERTIES_H
#define WBTABLEROWPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WBTableRowProperties : NSObject



+(void)mapProperties:(id)arg0 toWordProperties:(*void)arg1 ;
+(void)mapWordProperties:(*void)arg0 toProperties:(id)arg1 ;
+(void)readFrom:(id)arg0 wrdProperties:(*void)arg1 tracked:(*void)arg2 properties:(id)arg3 ;
+(void)write:(id)arg0 properties:(id)arg1 wrdProperties:(*void)arg2 tracked:(*void)arg3 ;


@end


#endif