// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUINOWPLAYINGWINDOWDELEGATEPROVIDER_H
#define VUINOWPLAYINGWINDOWDELEGATEPROVIDER_H

@class NSString;
@protocol VUINowPlayingWindowDelegate;

#import <Foundation/Foundation.h>


@interface VUINowPlayingWindowDelegateProvider : NSObject <VUINowPlayingWindowDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUINowPlayingWindowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldNowPlayingWindowDismiss;


@end


#endif