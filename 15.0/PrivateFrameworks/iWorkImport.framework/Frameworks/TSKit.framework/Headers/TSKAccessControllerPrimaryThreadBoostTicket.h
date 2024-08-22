// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKACCESSCONTROLLERPRIMARYTHREADBOOSTTICKET_H
#define TSKACCESSCONTROLLERPRIMARYTHREADBOOSTTICKET_H

@class NSString;
@protocol TSKAccessControllerPrimaryThreadBoostTicket;

#import <Foundation/Foundation.h>

#import "TSKAccessController.h"
#import "TSKAccessControllerRunLoop.h"

@interface TSKAccessControllerPrimaryThreadBoostTicket : NSObject <TSKAccessControllerPrimaryThreadBoostTicket>

 {
    TSKAccessController *_accessController;
    TSKAccessControllerRunLoop *_accessControllerRunLoop;
    *pthread_override_s _threadOverride;
    uint8_t _didEndBoosting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccessController:(id)arg0 ;
-(void)dealloc;
-(void)endBoost;


@end


#endif