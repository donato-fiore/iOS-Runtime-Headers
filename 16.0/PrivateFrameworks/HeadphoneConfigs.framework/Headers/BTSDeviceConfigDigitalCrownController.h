// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTSDEVICECONFIGDIGITALCROWNCONTROLLER_H
#define BTSDEVICECONFIGDIGITALCROWNCONTROLLER_H

@class PSListItemsController, UIImage, UIImageView;



@interface BTSDeviceConfigDigitalCrownController : PSListItemsController {
    UIImage *_rotationImage;
    UIImageView *_rotationImageView;
}




-(id)getRotationImageFileName:(NSInteger)arg0 ;
-(void)listItemSelected:(id)arg0 ;
-(void)setupTableViewHeader;
-(void)updateRotateImage:(NSInteger)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif