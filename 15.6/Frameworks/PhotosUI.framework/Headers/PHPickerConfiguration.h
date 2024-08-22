// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPICKERCONFIGURATION_H
#define PHPICKERCONFIGURATION_H

@class PHPhotoLibrary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PHPickerFilter.h"

@interface PHPickerConfiguration : NSObject <NSCopying>



@property (nonatomic, setter=_setAllowsContinuousSelection:) BOOL _allowsContinuousSelection; // ivar: __allowsContinuousSelection
@property (readonly, nonatomic) BOOL _onlyReturnsIdentifiers; // ivar: __onlyReturnsIdentifiers
@property (nonatomic, setter=_setUsesEmbeddedMessagesLayout:) BOOL _usesEmbeddedMessagesLayout; // ivar: __usesEmbeddedMessagesLayout
@property (copy, nonatomic) PHPickerFilter *filter; // ivar: _filter
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (nonatomic) NSInteger preferredAssetRepresentationMode; // ivar: _preferredAssetRepresentationMode
@property (copy, nonatomic) NSArray *preselectedAssetIdentifiers; // ivar: _preselectedAssetIdentifiers
@property (nonatomic) NSInteger selection; // ivar: _selection
@property (nonatomic) NSInteger selectionLimit; // ivar: _selectionLimit


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)initWithPhotoLibraryAndOnlyReturnsIdentifiers:(id)arg0 ;
-(void)_setOverlayFlag:(BOOL)arg0 ;


@end


#endif