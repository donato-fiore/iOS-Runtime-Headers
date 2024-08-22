// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPACTMAPTHUMBNAILVIEWCONTROLLER_H
#define WFCOMPACTMAPTHUMBNAILVIEWCONTROLLER_H

@class CLPlacemark;


#import "WFCompactThumbnailViewController.h"

@interface WFCompactMapThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) CLPlacemark *placemark; // ivar: _placemark


-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)initWithCLPlacemark:(id)arg0 ;
-(void)loadView;


@end


#endif