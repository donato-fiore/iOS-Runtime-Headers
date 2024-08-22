// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OFPAGEVIEWCONTROLLERCONTENTVIEWLAYER_H
#define _OFPAGEVIEWCONTROLLERCONTENTVIEWLAYER_H

@class CALayer;


#import "OFPageViewController.h"

@interface _OFPageViewControllerContentViewLayer : CALayer

@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) OFPageViewController *progressReportDelegate; // ivar: _progressReportDelegate


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)dealloc;


@end


#endif