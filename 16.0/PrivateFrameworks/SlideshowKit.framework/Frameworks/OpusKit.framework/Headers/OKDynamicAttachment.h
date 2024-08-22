// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKDYNAMICATTACHMENT_H
#define OKDYNAMICATTACHMENT_H

@class NSString, UIAttachmentBehavior;
@protocol OKSettingsSupport;

#import <Foundation/Foundation.h>


@interface OKDynamicAttachment : NSObject <OKSettingsSupport>

 {
    UIOffset _localOffsetFromCenter;
    NSString *_remoteWidgetName;
    ? _remote;
    CGFloat _length;
    CGFloat _damping;
    CGFloat _frequency;
    ? _flags;
}


@property (readonly) UIAttachmentBehavior *behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)updateForOwningDynamicProxy:(id)arg0 ;


@end


#endif