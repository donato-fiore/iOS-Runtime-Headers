// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABLIMITCLEANUPWIZARD_H
#define TABLIMITCLEANUPWIZARD_H


#import <Foundation/Foundation.h>

#import "BrowserController.h"

@interface TabLimitCleanupWizard : NSObject {
    BOOL _privateBrowsing;
    BrowserController *_browserController;
    id *_resultHandler;
}




-(id)_cleanupGroupForRange:(NSInteger)arg0 ;
-(id)_smallCleanupGroup;
-(id)initForPrivateBrowsing:(BOOL)arg0 withBrowserController:(id)arg1 resultHandler:(id)arg2 ;
-(id)makeViewController;


@end


#endif