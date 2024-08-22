// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REACCESSORYIMAGE_H
#define REACCESSORYIMAGE_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "REImage.h"

@interface REAccessoryImage : NSObject <NSCopying, NSCoding>



@property (copy, nonatomic) REImage *image; // ivar: _image


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif