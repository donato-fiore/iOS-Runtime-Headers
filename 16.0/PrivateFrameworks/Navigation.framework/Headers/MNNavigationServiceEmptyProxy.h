// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNNAVIGATIONSERVICEEMPTYPROXY_H
#define MNNAVIGATIONSERVICEEMPTYPROXY_H


#import <Foundation/Foundation.h>

#import "MNNavigationServicePeer.h"

@interface MNNavigationServiceEmptyProxy : NSObject {
    MNNavigationServicePeer *_peer;
}




-(BOOL)_isSelectorValidForForwarding:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithPeer:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif