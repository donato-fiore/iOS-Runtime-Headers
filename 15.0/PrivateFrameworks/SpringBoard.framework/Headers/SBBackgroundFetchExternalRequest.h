// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBACKGROUNDFETCHEXTERNALREQUEST_H
#define SBBACKGROUNDFETCHEXTERNALREQUEST_H

@class UIFetchContentInBackgroundAction;

#import <Foundation/Foundation.h>

#import "SBBackgroundFetchTask.h"

@interface SBBackgroundFetchExternalRequest : NSObject {
    SBBackgroundFetchTask *_task;
}


@property (readonly, nonatomic) UIFetchContentInBackgroundAction *action; // ivar: _action


-(id)initForBundleID:(id)arg0 ;
-(void)dealloc;
-(void)execute;


@end


#endif