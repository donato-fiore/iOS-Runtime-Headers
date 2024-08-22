// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDEBUGOVERLAYCONTROLLER_H
#define MFDEBUGOVERLAYCONTROLLER_H

@class NSString, UIImage, MRPlayerPath, UIViewController;

#import <Foundation/Foundation.h>


@interface MFDebugOverlayController : NSObject {
    ? overlayViewController;
    ? store;
}


@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) MRPlayerPath *playerPath;
@property (nonatomic, readonly) UIViewController *viewController;


-(id)init;


@end


#endif