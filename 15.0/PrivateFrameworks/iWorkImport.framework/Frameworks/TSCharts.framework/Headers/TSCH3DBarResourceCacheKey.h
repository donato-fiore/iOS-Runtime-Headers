// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DBARRESOURCECACHEKEY_H
#define TSCH3DBARRESOURCECACHEKEY_H


#import <Foundation/Foundation.h>


@interface TSCH3DBarResourceCacheKey : NSObject {
    BarExtrusionSetting _setting;
}




+(id)keyWithExtrusionSetting:(struct BarExtrusionSetting *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithExtrusionSetting:(struct BarExtrusionSetting *)arg0 ;


@end


#endif