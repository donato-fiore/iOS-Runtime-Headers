// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPOSTERMEDIA_H
#define PFPOSTERMEDIA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PFPosterEditConfiguration.h"

@interface PFPosterMedia : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration; // ivar: _editConfiguration
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSString *subpath; // ivar: _subpath
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAssetUUID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif