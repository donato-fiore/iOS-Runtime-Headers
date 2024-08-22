// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONSINGLEPHASSETEDITOR_H
#define NTKCOMPANIONSINGLEPHASSETEDITOR_H

@class NSString;


#import "NTKCompanionResourceDirectoryEditor.h"

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor {
    NSString *_albumName;
    BOOL _albumNameValid;
}


@property (retain, nonatomic) NSString *albumIdentifier; // ivar: _albumIdentifier
@property (readonly, nonatomic) NSString *albumName;
@property (nonatomic) BOOL shouldFinalize;


-(id)_createResourceDirectoryForSinglePHAssetWithPreviewOnly:(BOOL)arg0 ;
-(id)_fetchAlbumName;
-(id)_fetchSingleAsset;
-(id)initWithResourceDirectory:(id)arg0 forDevice:(id)arg1 shouldFinalize:(BOOL)arg2 ;
-(id)optionsForSingleAsset;
-(void)finalizeWithCompletion:(id)arg0 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(id)arg0 ;


@end


#endif