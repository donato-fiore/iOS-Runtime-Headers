// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNCTOGGLE_H
#define _DKSYNCTOGGLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _DKSyncToggle : NSObject {
    BOOL _enabled;
    NSObject *_object;
    NSString *_name;
    SEL _enableSelector;
    SEL _disableSelector;
}




-(id)initWithObject:(id)arg0 name:(id)arg1 enableSelector:(SEL)arg2 disableSelector:(SEL)arg3 ;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif