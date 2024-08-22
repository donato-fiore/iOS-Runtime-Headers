// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEORESOURCEMANIFESTTILESETOVERRIDE_H
#define _GEORESOURCEMANIFESTTILESETOVERRIDE_H

@class NSURL, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GEOResourceManifestTileSetOverride : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSURL *localizationURL; // ivar: _localizationURL
@property (readonly, nonatomic) int scale; // ivar: _scale
@property (readonly, nonatomic) int size; // ivar: _size
@property (readonly, nonatomic) int style; // ivar: _style
@property (copy, nonatomic) NSNumber *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(int)arg0 size:(int)arg1 scale:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif