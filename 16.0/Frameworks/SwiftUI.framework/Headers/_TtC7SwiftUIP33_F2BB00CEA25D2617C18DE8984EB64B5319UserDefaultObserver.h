// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUIP33_F2BB00CEA25D2617C18DE8984EB64B5319USERDEFAULTOBSERVER_H
#define _TTC7SWIFTUIP33_F2BB00CEA25D2617C18DE8984EB64B5319USERDEFAULTOBSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC7SwiftUIP33_F2BB00CEA25D2617C18DE8984EB64B5319UserDefaultObserver : NSObject {
    ? state;
    ? target;
}




-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)userDefaultsDidChange:(id)arg0 ;


@end


#endif