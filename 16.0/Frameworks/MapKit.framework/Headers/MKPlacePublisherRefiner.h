// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEPUBLISHERREFINER_H
#define MKPLACEPUBLISHERREFINER_H

@protocol MKMapServicePublisherViewTicket;

#import <Foundation/Foundation.h>

#import "MKMapItemIdentifier.h"

@interface MKPlacePublisherRefiner : NSObject {
    MKMapItemIdentifier *_publisherIdentifier;
    id<MKMapServicePublisherViewTicket> *_ticket;
}




-(id)initWithPublisherIdentifier:(NSUInteger)arg0 ;
-(id)initWithPublisherIdentifier:(NSUInteger)arg0 providerIdentifier:(int)arg1 ;
-(void)fetchWithCallbackQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif