// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKFULLKEYBOARDACCESSWATCHER_H
#define WKFULLKEYBOARDACCESSWATCHER_H


#import <Foundation/Foundation.h>


@interface WKFullKeyboardAccessWatcher : NSObject {
    BOOL fullKeyboardAccessEnabled;
}




+(BOOL)fullKeyboardAccessEnabled;
-(id)init;
-(void)notifyAllProcessPools;
-(void)retrieveKeyboardUIModeFromPreferences:(id)arg0 ;


@end


#endif