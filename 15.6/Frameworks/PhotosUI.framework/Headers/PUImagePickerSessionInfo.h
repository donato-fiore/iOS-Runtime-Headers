// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMAGEPICKERSESSIONINFO_H
#define PUIMAGEPICKERSESSIONINFO_H

@class NSString;


#import "PUSessionInfo.h"

@interface PUImagePickerSessionInfo : PUSessionInfo {
    BOOL _isLimitedLibraryPicker;
    NSUInteger _selectionLimit;
}


@property (nonatomic) BOOL showsPrompt; // ivar: _showsPrompt
@property (copy, nonatomic) NSString *staticPrompt; // ivar: _staticPrompt


-(BOOL)isForAssetPicker;
-(BOOL)isLimitedLibraryPicker;
-(BOOL)isSelectingAssets;
-(NSUInteger)selectionLimit;
-(id)initWithPhotoSelectionManager:(id)arg0 ;
-(id)initWithPhotosViewDelegate:(id)arg0 loadingStatusManager:(id)arg1 allowMultipleSelection:(BOOL)arg2 limitedLibrary:(BOOL)arg3 ;
-(id)localizedPrompt;
-(void)setSelectionLimit:(NSUInteger)arg0 ;


@end


#endif