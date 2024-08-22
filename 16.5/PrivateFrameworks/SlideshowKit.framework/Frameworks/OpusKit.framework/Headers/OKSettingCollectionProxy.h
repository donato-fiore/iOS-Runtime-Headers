// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKSETTINGCOLLECTIONPROXY_H
#define OKSETTINGCOLLECTIONPROXY_H

@class NSString;
@protocol OKSettingsSupport;

#import <Foundation/Foundation.h>


@interface OKSettingCollectionProxy : NSObject <OKSettingsSupport>

 {
    id *_listOfObjects;
    id *_keyResolverBlock;
    NSString *_keyPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
-(id)initWithObjects:(id)arg0 withBlock:(id)arg1 ;
-(id)initWithObjects:(id)arg0 withKeyPath:(id)arg1 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif