// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASVIEWELEMENTVIEWCONTROLLER_H
#define VIDEOSEXTRASVIEWELEMENTVIEWCONTROLLER_H

@class IKViewElement;


#import "VideosExtrasElementViewController.h"

@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController

@property (nonatomic) BOOL embedded; // ivar: _embedded
@property (readonly, nonatomic) BOOL matchParentHeight;
@property (readonly, nonatomic) NSInteger preferredLayoutAttribute;
@property (readonly, nonatomic) id *preferredLayoutGuide;
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(id)initWithViewElement:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif