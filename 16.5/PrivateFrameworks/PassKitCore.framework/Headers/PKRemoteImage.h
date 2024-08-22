// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEIMAGE_H
#define PKREMOTEIMAGE_H

@class NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKRemoteImage : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat height; // ivar: _height
@property (retain, nonatomic) NSURL *remoteURL; // ivar: _remoteURL
@property (nonatomic) NSUInteger scaleFactor; // ivar: _scaleFactor
@property (nonatomic) CGFloat width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteImage:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRemoteURL:(id)arg0 scaleFactor:(NSUInteger)arg1 ;
-(id)initWithRemoteURL:(id)arg0 scaleFactor:(NSUInteger)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchImageWithCompletion:(id)arg0 ;


@end


#endif