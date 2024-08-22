// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REIMAGE_H
#define REIMAGE_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface REImage : NSObject <NSCopying, NSCoding>





+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
+(id)imageWithContentsOfFileAtPath:(id)arg0 scale:(CGFloat)arg1 ;
+(id)imageWithData:(id)arg0 scale:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif