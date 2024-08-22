// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSREMOTEIMAGEVIEW_H
#define BPSREMOTEIMAGEVIEW_H

@class UIImageView, NSString;



@interface BPSRemoteImageView : UIImageView

@property (copy, nonatomic) NSString *desiredImageName; // ivar: _desiredImageName
@property (copy, nonatomic) NSString *fallbackImageName; // ivar: _fallbackImageName


-(id)init;
-(void)dealloc;
-(void)updateImagesWithAnimation;
-(void)updateImagesWithAnimation:(BOOL)arg0 ;


@end


#endif