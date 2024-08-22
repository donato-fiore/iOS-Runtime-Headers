// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEFAULTSINTERFACESTYLEOBSERVER_H
#define _UIDEFAULTSINTERFACESTYLEOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIDefaultsInterfaceStyleObserver : NSObject {
    NSString *_notificationName;
    int _notifyToken;
}




-(id)initWithNotificationName:(id)arg0 darwinNotification:(char *)arg1 ;
-(void)_didChange;
-(void)dealloc;
-(void)observeUserDefaults:(id)arg0 key:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif