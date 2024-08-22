// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBOUTLINEBULLETKEY_H
#define PBOUTLINEBULLETKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PBOutlineBulletKey : NSObject <NSCopying>

 {
    unsigned int mSlideId;
    int mTextType;
    unsigned int mPlaceholderIndex;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOutlineBullet:(id)arg0 ;
-(id)initWithSlideId:(unsigned int)arg0 textType:(int)arg1 placeholderIndex:(unsigned int)arg2 ;


@end


#endif