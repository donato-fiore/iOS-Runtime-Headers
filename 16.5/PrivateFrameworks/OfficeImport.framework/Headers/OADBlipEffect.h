// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADBLIPEFFECT_H
#define OADBLIPEFFECT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADBlipEffect : NSObject <NSCopying>

 {
    int mType;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(int)arg0 ;
-(int)type;
-(void)setStyleColor:(id)arg0 ;


@end


#endif