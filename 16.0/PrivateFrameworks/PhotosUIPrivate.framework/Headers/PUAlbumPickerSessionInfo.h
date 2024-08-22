// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUALBUMPICKERSESSIONINFO_H
#define PUALBUMPICKERSESSIONINFO_H



#import "PUSessionInfo.h"

@interface PUAlbumPickerSessionInfo : PUSessionInfo



-(BOOL)isForAlbumPicker;
-(BOOL)isSelectingTargetAlbum;
-(id)initWithSourceAlbum:(id)arg0 transferredAssets:(id)arg1 ;


@end


#endif