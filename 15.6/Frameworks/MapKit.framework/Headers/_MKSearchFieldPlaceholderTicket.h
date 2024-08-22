// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKSEARCHFIELDPLACEHOLDERTICKET_H
#define _MKSEARCHFIELDPLACEHOLDERTICKET_H

@class NSString, GEOMapServiceTraits;
@protocol MKMapServiceSearchFieldPlaceholderTicket, GEOMapServiceSearchFieldPlaceholderTicket;

#import <Foundation/Foundation.h>


@interface _MKSearchFieldPlaceholderTicket : NSObject <MKMapServiceSearchFieldPlaceholderTicket>

 {
    id<GEOMapServiceSearchFieldPlaceholderTicket> *_ticket;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithTicket:(id)arg0 ;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif