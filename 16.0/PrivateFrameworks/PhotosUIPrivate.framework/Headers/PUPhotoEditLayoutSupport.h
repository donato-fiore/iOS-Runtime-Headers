// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITLAYOUTSUPPORT_H
#define PUPHOTOEDITLAYOUTSUPPORT_H


#import <Foundation/Foundation.h>


@interface PUPhotoEditLayoutSupport : NSObject



+(id)layoutConstraintsForHidingSecondaryView:(id)arg0 layoutOrientation:(NSInteger)arg1 ;
+(id)layoutConstraintsForHidingView:(id)arg0 layoutOrientation:(NSInteger)arg1 ;
+(void)transitionFromBarView:(id)arg0 orientation:(NSInteger)arg1 toBarView:(id)arg2 orientation:(NSInteger)arg3 coordinator:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif