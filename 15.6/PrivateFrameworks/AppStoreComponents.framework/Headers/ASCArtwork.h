// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCARTWORK_H
#define ASCARTWORK_H

@class NSString, UIImage;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCArtwork : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *URLTemplate;
@property (readonly, nonatomic) id *dataSource; // ivar: _dataSource
@property (readonly, copy, nonatomic) NSString *decoration; // ivar: _decoration
@property (readonly, nonatomic) UIImage *embeddedImage;
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, copy, nonatomic) NSString *preferredCrop; // ivar: _preferredCrop
@property (readonly, copy, nonatomic) NSString *preferredFormat; // ivar: _preferredFormat
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 decoration:(id)arg1 ;
-(id)initWithURLTemplate:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 decoration:(id)arg3 preferredCrop:(id)arg4 preferredFormat:(id)arg5 ;
-(id)makeURLWithSubstitutions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif