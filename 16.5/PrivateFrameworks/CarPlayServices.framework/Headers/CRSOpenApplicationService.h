// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSOPENAPPLICATIONSERVICE_H
#define CRSOPENAPPLICATIONSERVICE_H

@class FBSOpenApplicationService;

#import <Foundation/Foundation.h>


@interface CRSOpenApplicationService : NSObject {
    FBSOpenApplicationService *_openService;
}




+(id)defaultService;
-(void)openApplication:(id)arg0 completion:(id)arg1 ;


@end


#endif