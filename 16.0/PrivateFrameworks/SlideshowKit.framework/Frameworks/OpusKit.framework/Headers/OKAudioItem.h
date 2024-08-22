// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKAUDIOITEM_H
#define OKAUDIOITEM_H

@class NSString, NSURL;
@protocol OKSettingsSupport;

#import <Foundation/Foundation.h>


@interface OKAudioItem : NSObject <OKSettingsSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(id)supportedSettings;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif