// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SIRIGEO27INSTOPSHAREETAINTENTHANDLER_H
#define _TTC7SIRIGEO27INSTOPSHAREETAINTENTHANDLER_H

@protocol INStopShareETAIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC7SiriGeo27INStopShareETAIntentHandler : NSObject <INStopShareETAIntentHandling>

 {
    ? logObject;
    ? contactService;
    ? sharedTripContact;
}




-(id)init;
-(void)confirmStopShareETA:(id)arg0 completion:(id)arg1 ;
-(void)handleStopShareETA:(id)arg0 completion:(id)arg1 ;
-(void)resolveRecipientsForStopShareETA:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif