// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXICONCONTENTVIEWCONTROLLER_H
#define PRXICONCONTENTVIEWCONTROLLER_H

@class NSString, NSArray;


#import "PRXCardContentViewController.h"
#import "PRXIconContentView.h"

@interface PRXIconContentViewController : PRXCardContentViewController

@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, nonatomic) PRXIconContentView *contentView;
@property (nonatomic) NSInteger imageStyle; // ivar: _imageStyle
@property (copy, nonatomic) NSArray *images; // ivar: _images


-(id)initWithContentView:(id)arg0 ;
-(void)_updateBodyLabel;
-(void)_updateImageViews;
-(void)viewDidLoad;


@end


#endif