// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AATRACKINGCONSENT_H
#define AATRACKINGCONSENT_H


#import <Foundation/Foundation.h>


@interface AATrackingConsent : NSObject {
    ? accessGroup;
    ? lock;
    ? consented;
}




+(id)shared;
-(id)init;
-(void)allow;


@end


#endif