// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SIRIGEO23INSHAREETAINTENTHANDLER_H
#define _TTC7SIRIGEO23INSHAREETAINTENTHANDLER_H

@protocol INShareETAIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC7SiriGeo23INShareETAIntentHandler : NSObject <INShareETAIntentHandling>

 {
    ? logObject;
    ? sharedTripContact;
    ? contactService;
}




-(id)init;
-(void)confirmShareETA:(id)arg0 completion:(id)arg1 ;
-(void)handleShareETA:(id)arg0 completion:(id)arg1 ;
-(void)resolveRecipientsForShareETA:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif