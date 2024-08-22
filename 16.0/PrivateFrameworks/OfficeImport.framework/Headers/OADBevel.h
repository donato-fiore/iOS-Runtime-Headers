// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADBEVEL_H
#define OADBEVEL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADBevel : NSObject <NSCopying>

 {
    int mType;
    float mWidth;
    float mHeight;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)height;
-(float)width;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(int)type;
-(void)setHeight:(float)arg0 ;
-(void)setType:(int)arg0 ;
-(void)setWidth:(float)arg0 ;


@end


#endif