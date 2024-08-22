// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKBACKGROUNDUPDATECONTROLLER_H
#define WLKBACKGROUNDUPDATECONTROLLER_H


#import <Foundation/Foundation.h>


@interface WLKBackgroundUpdateController : NSObject {
    int _notifyToken;
    BOOL _notifyTokenIsValid;
}




+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)dealloc;


@end


#endif