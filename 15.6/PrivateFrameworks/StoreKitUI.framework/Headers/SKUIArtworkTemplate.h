// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIARTWORKTEMPLATE_H
#define SKUIARTWORKTEMPLATE_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol SKUIArtworkProviding;

#import <Foundation/Foundation.h>

#import "SKUIArtwork.h"

@interface SKUIArtworkTemplate : NSObject <SKUIArtworkProviding>



@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger height; // ivar: _height
@property (readonly, nonatomic) SKUIArtwork *largestArtwork;
@property (readonly, nonatomic) NSMutableSet *servedArtworks; // ivar: _servedArtworks
@property (readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *urlTemplateString; // ivar: _urlTemplateString
@property (readonly, nonatomic) NSInteger width; // ivar: _width


+(BOOL)canHandleArtworkFormat:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)hasArtwork;
-(BOOL)isEqual:(id)arg0 ;
-(id)_artworkURLWithWidth:(NSInteger)arg0 ;
-(id)_artworkWithWidth:(NSInteger)arg0 ;
-(id)_lookupDictionary;
-(id)_urlStringWithTargetSize:(struct CGSize )arg0 ;
-(id)artworkForSize:(NSInteger)arg0 ;
-(id)artworkURLForSize:(NSInteger)arg0 ;
-(id)artworkWithWidth:(NSInteger)arg0 ;
-(id)bestArtworkForScaledSize:(struct CGSize )arg0 ;
-(id)bestArtworkForSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplateDictionary:(id)arg0 ;
-(id)preferredExactArtworkForSize:(struct CGSize )arg0 ;
-(struct CGSize )_sizeForWidth:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif