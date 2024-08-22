// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES19PRESENTATIONOPTIONS_H
#define _TTC18ACTIVITYUISERVICES19PRESENTATIONOPTIONS_H

@class NSArray, BSColor;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices19PresentationOptions : NSObject {
    ? activityHostTouchRestrictedRects;
}


@property (nonatomic, copy) NSArray *activityHostTouchRestrictedRects;
@property (nonatomic) BOOL isUserDismissalAllowedOnLockScreen; // ivar: isUserDismissalAllowedOnLockScreen
@property (nonatomic, retain) BSColor *platterTintColor; // ivar: platterTintColor


-(id)init;


@end


#endif