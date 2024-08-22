// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDUIHANDLE_H
#define UIKEYBOARDUIHANDLE_H

@class BSServiceConnection<BSServiceConnectionHost>;
@protocol UIKeyboardUIServiceProtocol;

#import <Foundation/Foundation.h>

#import "UIKeyboardUIService.h"

@interface UIKeyboardUIHandle : NSObject <UIKeyboardUIServiceProtocol>

 {
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    UIKeyboardUIService *_service;
}




-(id)initWithService:(id)arg0 connection:(id)arg1 ;
-(id)snapshotForOptions:(id)arg0 ;
-(id)snapshotForView:(id)arg0 ;
-(void)setKeyboardAlpha:(id)arg0 ;


@end


#endif