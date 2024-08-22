// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REFILEIMAGE_H
#define REFILEIMAGE_H

@class NSString;


#import "REImage.h"

@interface REFileImage : REImage

@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 scale:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif