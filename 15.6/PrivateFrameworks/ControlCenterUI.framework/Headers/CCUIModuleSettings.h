// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIMODULESETTINGS_H
#define CCUIMODULESETTINGS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUIModuleSettings : NSObject <NSCopying>

 {
    CCUILayoutSize _portraitLayoutSize;
    CCUILayoutSize _landscapeLayoutSize;
    BOOL _portraitDoubleMargin;
    BOOL _landscapeDoubleMargin;
}




-(BOOL)doubleMarginForInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPortraitLayoutSize:(struct CCUILayoutSize )arg0 landscapeLayoutSize:(struct CCUILayoutSize )arg1 ;
-(id)initWithPortraitLayoutSize:(struct CCUILayoutSize )arg0 landscapeLayoutSize:(struct CCUILayoutSize )arg1 portraitDoubleMargin:(BOOL)arg2 landscapeDoubleMargin:(BOOL)arg3 ;
-(struct CCUILayoutSize )layoutSizeForInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif