// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSECTIONSRESPONSE_H
#define SUSECTIONSRESPONSE_H

@class NSMutableDictionary, NSNumber, NSArray, UIImage, SSItemImageCollection, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"

@interface SUSectionsResponse : NSObject {
    SUClientInterface *_clientInterface;
    NSMutableDictionary *_sectionsCache;
    NSNumber *_shouldResetUserOrdering;
}


@property (readonly, nonatomic) NSArray *allSections;
@property (nonatomic, getter=isCacheable) BOOL cacheable; // ivar: _cacheable
@property (retain, nonatomic) UIImage *moreListImage; // ivar: _moreListImage
@property (readonly, nonatomic) SSItemImageCollection *moreListImageCollection;
@property (retain, nonatomic) UIImage *moreListSelectedImage; // ivar: _moreListSelectedImage
@property (readonly, nonatomic) NSString *moreListTitle;
@property (readonly, copy, nonatomic) NSDictionary *rawResponseDictionary; // ivar: _rawResponseDictionary
@property (readonly, nonatomic) NSInteger responseType; // ivar: _responseType
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDictionary *sectionsDictionary;
@property (nonatomic) BOOL shouldResetUserOrdering;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (readonly, nonatomic) NSString *versionString;


+(id)lastCachedVersionIdentifier;
+(void)setLastCachedVersionIdentifier:(id)arg0 ;
-(BOOL)_loadArtworkFromCacheDirectory:(id)arg0 ;
-(BOOL)writeToCacheDirectory:(id)arg0 error:(*id)arg1 ;
-(id)_newImageForIdentifier:(id)arg0 variant:(id)arg1 cacheDirectory:(id)arg2 ;
-(id)_newSectionsFromDictionary:(id)arg0 ;
-(id)_newVariantStringForButton:(id)arg0 ;
-(id)init;
-(id)initWithClientInterface:(id)arg0 cacheDirectory:(id)arg1 ;
-(id)initWithClientInterface:(id)arg0 sectionsDictionary:(id)arg1 responseType:(NSInteger)arg2 ;
-(void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg0 ;
-(void)_dropImageKeysFromArray:(id)arg0 ;
-(void)_dropImageKeysFromDictionary:(id)arg0 ;
-(void)_loadButtonArtworkForSection:(id)arg0 buttons:(id)arg1 cachePath:(id)arg2 ;
-(void)_writeButtonImagesForSection:(id)arg0 buttons:(id)arg1 cachePath:(id)arg2 ;
-(void)_writeImage:(id)arg0 toCachePath:(id)arg1 forIdentifier:(id)arg2 variant:(id)arg3 ;
-(void)dealloc;
-(void)dropEmbeddedImages;


@end


#endif