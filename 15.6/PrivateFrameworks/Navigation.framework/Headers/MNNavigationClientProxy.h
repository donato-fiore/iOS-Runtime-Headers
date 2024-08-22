// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONCLIENTPROXY_H
#define MNNAVIGATIONCLIENTPROXY_H

@class GEOApplicationAuditToken;

#import <Foundation/Foundation.h>

#import "MNDirectionsRequestManager.h"

@interface MNNavigationClientProxy : NSObject {
    GEOApplicationAuditToken *_auditToken;
    MNDirectionsRequestManager *_directionsRequestManager;
}




-(id)_directionsRequestManager;
-(id)init;
-(void)cancelDirectionsRequestWithIdentifier:(id)arg0 ;
-(void)requestDirections:(id)arg0 withIdentifier:(id)arg1 handler:(id)arg2 ;


@end


#endif