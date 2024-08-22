// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16HEALTHEXPERIENCE20USERDEFAULTSOBSERVER_H
#define _TTC16HEALTHEXPERIENCE20USERDEFAULTSOBSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC16HealthExperience20UserDefaultsObserver : NSObject {
    ? currentValue;
    ? userDefaults;
    ? key;
}




-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif