// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKPINANNOTATIONVIEWIMAGECACHEKEY_H
#define _MKPINANNOTATIONVIEWIMAGECACHEKEY_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface _MKPinAnnotationViewImageCacheKey : NSObject {
    NSUInteger _mapType;
    UIColor *_pinColor;
    NSInteger _idiom;
    NSInteger _userInterfaceStyle;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithMapType:(NSUInteger)arg0 pinColor:(id)arg1 traits:(id)arg2 ;


@end


#endif