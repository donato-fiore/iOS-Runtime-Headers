// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYMEDIA_H
#define PKDISCOVERYMEDIA_H

@class NSURL, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKColor.h"

@interface PKDiscoveryMedia : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) NSURL *localAssetURL; // ivar: _localAssetURL
@property (readonly, nonatomic) NSString *passKitUIImageName; // ivar: _passKitUIImageName
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSDictionary *urls; // ivar: _urls
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_remoteAssetForScale:(CGFloat)arg0 ;
-(id)description;
-(id)imageDataFromCacheWithScale:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)downloadImageDataWithScale:(CGFloat)arg0 shouldWriteData:(BOOL)arg1 completion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif