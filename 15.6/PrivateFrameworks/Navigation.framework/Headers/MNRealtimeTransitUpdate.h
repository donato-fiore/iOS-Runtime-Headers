// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNREALTIMETRANSITUPDATE_H
#define MNREALTIMETRANSITUPDATE_H

@class GEOTransitRouteUpdate;
@protocol NSSecureCoding;


#import "MNRealtimeUpdate.h"

@interface MNRealtimeTransitUpdate : MNRealtimeUpdate <NSSecureCoding>



@property (readonly, nonatomic) GEOTransitRouteUpdate *transitUpdate; // ivar: _transitUpdate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransitRouteUpdate:(id)arg0 ;
-(id)routeID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif