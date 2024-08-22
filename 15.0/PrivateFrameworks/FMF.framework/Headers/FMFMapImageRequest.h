// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFMAPIMAGEREQUEST_H
#define FMFMAPIMAGEREQUEST_H

@class NSString, CLLocation;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMFMapImageRequest : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) BOOL cachingEnabled; // ivar: _cachingEnabled
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) BOOL isShifted; // ivar: _isShifted
@property (readonly, nonatomic) NSString *key;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) CGFloat pitch; // ivar: _pitch
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) CGFloat width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 altitude:(CGFloat)arg1 pitch:(CGFloat)arg2 width:(CGFloat)arg3 height:(CGFloat)arg4 andCachingEnabled:(BOOL)arg5 ;
-(id)initWithLocation:(id)arg0 isShifted:(BOOL)arg1 altitude:(CGFloat)arg2 pitch:(CGFloat)arg3 width:(CGFloat)arg4 height:(CGFloat)arg5 andCachingEnabled:(BOOL)arg6 ;
-(id)initWithLocation:(id)arg0 isShifted:(BOOL)arg1 radius:(CGFloat)arg2 width:(CGFloat)arg3 height:(CGFloat)arg4 andCachingEnabled:(BOOL)arg5 ;
-(id)initWithLocation:(id)arg0 radius:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 andCachingEnabled:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif