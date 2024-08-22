// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACEHOLDERAUDIOASSET_H
#define PXPLACEHOLDERAUDIOASSET_H

@class NSString, NSArray;
@protocol PXAudioAsset, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXPlaceholderAudioAsset : NSObject <PXAudioAsset>



@property (readonly, copy, nonatomic) NSString *albumTitle;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *artworkDisplayAsset;
@property (readonly, copy, nonatomic) NSString *assetTagsDescription;
@property (readonly, nonatomic) Class audioSessionClass; // ivar: _audioSessionClass
@property (readonly, nonatomic) NSInteger catalog; // ivar: _catalog
@property (readonly, copy, nonatomic) NSString *colorGradeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration;
@property (readonly, copy, nonatomic) NSArray *entryPoints;
@property (readonly, nonatomic) ? exportableDuration;
@property (readonly, nonatomic) NSUInteger flags;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger pace;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *previewAudioAsset;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(BOOL)isAudioEqualToAsset:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCatalog:(NSInteger)arg0 identifier:(id)arg1 audioSessionClass:(Class)arg2 ;


@end


#endif