// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIMAGEPREVIEWCONTROLLER_H
#define ICIMAGEPREVIEWCONTROLLER_H

@class UIViewController, ICAttachment;



@interface ICImagePreviewController : UIViewController

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment


-(BOOL)_canShowWhileLocked;
-(id)initWithAttachment:(id)arg0 ;


@end


#endif