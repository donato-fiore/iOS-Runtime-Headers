// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMAGEPICKERSESSIONINFO_H
#define PUIMAGEPICKERSESSIONINFO_H



#import "PUSessionInfo.h"

@interface PUImagePickerSessionInfo : PUSessionInfo {
    BOOL _isLimitedLibraryPicker;
}




-(BOOL)isForAssetPicker;
-(BOOL)isLimitedLibraryPicker;
-(BOOL)isSelectingAssets;
-(id)initWithPhotosViewDelegate:(id)arg0 loadingStatusManager:(id)arg1 allowMultipleSelection:(BOOL)arg2 limitedLibrary:(BOOL)arg3 ;


@end


#endif