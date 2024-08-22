// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSPICKERSESSIONINFO_H
#define PUPHOTOSPICKERSESSIONINFO_H



#import "PUSessionInfo.h"

@interface PUPhotosPickerSessionInfo : PUSessionInfo



-(BOOL)isSelectingAssets;
-(id)_initWithTargetAlbum:(id)arg0 orTargetAlbumName:(id)arg1 ;
-(id)initWithTargetAlbum:(id)arg0 ;
-(id)initWithTargetAlbumName:(id)arg0 ;
-(id)localizedPrompt;


@end


#endif