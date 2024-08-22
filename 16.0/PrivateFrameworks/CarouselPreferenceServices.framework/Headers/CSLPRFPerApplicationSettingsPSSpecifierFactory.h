// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFPERAPPLICATIONSETTINGSPSSPECIFIERFACTORY_H
#define CSLPRFPERAPPLICATIONSETTINGSPSSPECIFIERFACTORY_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface CSLPRFPerApplicationSettingsPSSpecifierFactory : NSObject {
    NSOperationQueue *_localIconLoadingQueue;
}




-(id)init;
-(id)specifierForSettings:(id)arg0 set:(SEL)arg1 get:(SEL)arg2 ;
-(void)dealloc;
-(void)updateSpecifier:(id)arg0 withSettings:(id)arg1 ;


@end


#endif