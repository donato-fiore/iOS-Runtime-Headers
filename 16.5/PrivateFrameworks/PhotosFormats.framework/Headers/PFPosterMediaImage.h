// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPOSTERMEDIAIMAGE_H
#define PFPOSTERMEDIAIMAGE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "PFPosterMedia.h"

@interface PFPosterMediaImage : PFPosterMedia <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *imageName; // ivar: _imageName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif