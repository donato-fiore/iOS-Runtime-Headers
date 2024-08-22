// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSCREENSHOTMANAGER_H
#define DBSCREENSHOTMANAGER_H

@class UIWindowScene;

#import <Foundation/Foundation.h>


@interface DBScreenshotManager : NSObject {
    UIWindowScene *_windowScene;
}




-(id)initWithWindowScene:(id)arg0 ;
-(void)saveScreenshotsForDisplayIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif