// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRMOBILEAGENTITINERARY_H
#define XRMOBILEAGENTITINERARY_H

@class NSString;
@protocol XRMobileAgentStop;

#import <Foundation/Foundation.h>


@interface XRMobileAgentItinerary : NSObject {
    id<XRMobileAgentStop> *_nextStop;
    id<XRMobileAgentStop> *_nextStopTicket;
    NSString *_nextMode;
    int _nextMovementType;
    unsigned int _nextQoS;
}


@property (readonly, nonatomic) NSObject<XRMobileAgentStop> *currentStop; // ivar: _currentStop
@property (retain, nonatomic) NSObject<XRMobileAgentStop> *finalDestination; // ivar: _finalDestination
@property (retain, nonatomic) id *finalDestinationTicket; // ivar: _finalDestinationTicket
@property (readonly, nonatomic) BOOL updated; // ivar: _updated


+(id)inlineStop;
-(int)_nextMovementType;
-(void)_visitNextStop:(id)arg0 ;
-(void)finishedWithMode:(id)arg0 ;
-(void)revisit;
-(void)setNextStop:(id)arg0 mode:(id)arg1 ;
-(void)setNextStop:(id)arg0 mode:(id)arg1 ticket:(id)arg2 ;
-(void)setNextStop:(id)arg0 mode:(id)arg1 ticket:(id)arg2 desiredQoS:(unsigned int)arg3 ;


@end


#endif