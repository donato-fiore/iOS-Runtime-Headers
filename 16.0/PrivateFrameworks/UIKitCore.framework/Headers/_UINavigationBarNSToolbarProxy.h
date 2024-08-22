// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARNSTOOLBARPROXY_H
#define _UINAVIGATIONBARNSTOOLBARPROXY_H

@class NSString, NSURL, NSMutableSet, UITitlebar, NSToolbar;

#import <Foundation/Foundation.h>


@interface _UINavigationBarNSToolbarProxy : NSObject {
    NSString *_title;
    NSString *_subtitle;
    NSURL *_representedURL;
    NSMutableSet *_registeredParticipants;
    ? _flags;
}


@property (readonly, weak, nonatomic) UITitlebar *owningTitlebar; // ivar: _owningTitlebar
@property (readonly, nonatomic) NSURL *representedURL;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSToolbar *toolbar;


+(BOOL)_supportsNSToolbarNavigationHosting;
-(id)description;
-(id)initWithTitlebar:(id)arg0 ;
-(void)_updateIfNecessary;
-(void)registerToolbarParticipant:(id)arg0 ;
-(void)setNeedsUpdate;
-(void)unregisterToolbarParticipant:(id)arg0 ;


@end


#endif