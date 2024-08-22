// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BSUIMAPSERVICETICKET_H
#define _BSUIMAPSERVICETICKET_H

@class NSString;
@protocol BSUIMapServiceTicket, MKMapServiceTicket;

#import <Foundation/Foundation.h>


@interface _BSUIMapServiceTicket : NSObject <BSUIMapServiceTicket>

 {
    id<MKMapServiceTicket> *_serviceTicket;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)submitWithHandler:(id)arg0 ;


@end


#endif