// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIARTWORK_H
#define SKUIARTWORK_H

@class NSURL, NSString, NSMutableDictionary;
@protocol SKUICacheCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKUIArtwork : NSObject <SKUICacheCoding, NSSecureCoding>

 {
    NSURL *_url;
    NSString *_urlString;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger height; // ivar: _height
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_lookupDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArtworkDictionary:(id)arg0 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 size:(struct CGSize )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif