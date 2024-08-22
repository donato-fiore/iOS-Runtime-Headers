// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIAVATARVIEWCONTROLLER_H
#define MUIAVATARVIEWCONTROLLER_H

@class CNAvatarViewController, UIView;

#import <Foundation/Foundation.h>


@interface MUIAvatarViewController : NSObject

@property (retain, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (readonly, nonatomic) UIView *view; // ivar: _view


+(id)avatarControllerWithContacts:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(void)updateContacts:(id)arg0 ;


@end


#endif