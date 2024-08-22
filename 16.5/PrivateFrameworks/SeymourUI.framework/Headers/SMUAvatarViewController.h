// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMUAVATARVIEWCONTROLLER_H
#define SMUAVATARVIEWCONTROLLER_H

@class CNAvatarViewController, UIView;

#import <Foundation/Foundation.h>


@interface SMUAvatarViewController : NSObject {
    CNAvatarViewController *_avatarViewController;
}


@property (readonly, nonatomic) UIView *view; // ivar: view


+(id)descriptorForRequiredKeys;
-(id)init;
-(void)setContact:(id)arg0 ;


@end


#endif