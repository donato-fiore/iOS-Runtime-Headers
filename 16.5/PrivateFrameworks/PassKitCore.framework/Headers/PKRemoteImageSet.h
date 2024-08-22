// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEIMAGESET_H
#define PKREMOTEIMAGESET_H

@class NSSet, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKRemoteImageSet : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSSet *images; // ivar: _images
@property (retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteImageSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageForScaleFactor:(NSUInteger)arg0 ;
-(id)imageForScaleFactorValue:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 dictionaries:(id)arg1 ;
-(id)initWithName:(id)arg0 images:(id)arg1 ;
-(void)addURL:(id)arg0 forScaleFactor:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif