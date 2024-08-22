// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHOTSPOTDETAILS_H
#define WFHOTSPOTDETAILS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface WFHotspotDetails : NSObject

@property (retain, nonatomic) NSNumber *batteryLife; // ivar: _batteryLife
@property (copy, nonatomic) NSString *cellularProtocolString; // ivar: _cellularProtocolString
@property (retain, nonatomic) NSNumber *signalStrength; // ivar: _signalStrength


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualHotspotDetails:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif