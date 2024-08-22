// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WMPICTUREMAPPER_H
#define WMPICTUREMAPPER_H



#import "CMDrawableMapper.h"
#import "WDPicture.h"

@interface WMPictureMapper : CMDrawableMapper {
    WDPicture *wdPicture;
}




-(id)initWithWDPicture:(id)arg0 parent:(id)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapBounds;
-(void)setBoundingBox;


@end


#endif