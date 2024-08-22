// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPROTECTION_H
#define EDPROTECTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EDProtection : NSObject <NSCopying>

 {
    BOOL mHidden;
    BOOL mLocked;
}




+(id)protectionWithHidden:(BOOL)arg0 locked:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProtection:(id)arg0 ;
-(BOOL)isHidden;
-(BOOL)isLocked;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHidden:(BOOL)arg0 locked:(BOOL)arg1 ;


@end


#endif