// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAPICKERCONFIGURATION_H
#define MPMEDIAPICKERCONFIGURATION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPPlaybackArchiveConfiguration.h"

@interface MPMediaPickerConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsPickingMultipleItems; // ivar: _allowsPickingMultipleItems
@property (nonatomic) BOOL alwaysShowSearchBarInLibrary; // ivar: _alwaysShowSearchBarInLibrary
@property (nonatomic) BOOL automaticallyDrillsToLibrary; // ivar: _automaticallyDrillsToLibrary
@property (nonatomic) NSUInteger mediaTypes; // ivar: _mediaTypes
@property (nonatomic) BOOL pickingForExternalPlayer; // ivar: _pickingForExternalPlayer
@property (nonatomic) BOOL picksSingleCollectionEntity; // ivar: _picksSingleCollectionEntity
@property (retain, nonatomic) MPPlaybackArchiveConfiguration *playbackArchiveConfiguration; // ivar: _playbackArchiveConfiguration
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (nonatomic) NSInteger selectionMode; // ivar: _selectionMode
@property (nonatomic) BOOL showsCatalogContent;
@property (nonatomic) BOOL showsCloudItems; // ivar: _showsCloudItems
@property (nonatomic) BOOL showsItemsWithProtectedAssets; // ivar: _showsItemsWithProtectedAssets
@property (nonatomic) BOOL showsLibraryContent;
@property (nonatomic) NSInteger supportedContentOptions; // ivar: _supportedContentOptions
@property (nonatomic) BOOL supportsUnavailableContent;
@property (copy, nonatomic) NSArray *typeIdentifiers; // ivar: _typeIdentifiers
@property (nonatomic) unsigned int watchCompatibilityVersion; // ivar: _watchCompatibilityVersion


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif