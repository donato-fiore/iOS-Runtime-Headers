// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHCUSTOMCATALOG_H
#define SHCUSTOMCATALOG_H

@class NSArray;
@protocol SHCustomCatalogDelegate;


#import "SHCatalog.h"
#import "SHCustomCatalogContainer.h"

@interface SHCustomCatalog : SHCatalog {
    CGFloat _minimumQuerySignatureDuration;
}


@property (weak, nonatomic) NSObject<SHCustomCatalogDelegate> *_customCatalogDelegate; // ivar: __customCatalogDelegate
@property (retain, nonatomic) NSArray *_referenceAudioMediaItems; // ivar: __referenceAudioMediaItems
@property (readonly, nonatomic) CGFloat _windowSeconds; // ivar: __windowSeconds
@property (readonly, nonatomic) SHCustomCatalogContainer *customCatalogContainer; // ivar: _customCatalogContainer
@property (readonly, nonatomic) NSInteger density; // ivar: _density
@property (readonly, nonatomic) NSArray *mediaItems;


+(id)new;
-(BOOL)_addReferenceSignature:(id)arg0 forReferenceMediaItemsWithError:(*id)arg1 ;
-(BOOL)addCustomCatalogFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)addReferenceSignature:(id)arg0 representingMediaItems:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(CGFloat)_bufferDuration;
-(CGFloat)minimumQuerySignatureDuration;
-(id)_createMatcher;
-(id)_initWithInstallationID:(id)arg0 ;
-(id)init;
-(id)initWithDensity:(NSInteger)arg0 ;
-(id)initWithWindowSeconds:(CGFloat)arg0 minimumSignatureDuration:(CGFloat)arg1 density:(NSInteger)arg2 ;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)flowReferenceAudio:(id)arg0 atTime:(id)arg1 representingMediaItems:(id)arg2 ;


@end


#endif