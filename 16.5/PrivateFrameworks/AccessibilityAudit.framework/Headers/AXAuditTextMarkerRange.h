// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITTEXTMARKERRANGE_H
#define AXAUDITTEXTMARKERRANGE_H

@class NSString;
@protocol AXAuditTransportableObjectProtocol;

#import <Foundation/Foundation.h>

#import "AXAuditTextMarker.h"

@interface AXAuditTextMarkerRange : NSObject <AXAuditTransportableObjectProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXAuditTextMarker *endMarker; // ivar: _endMarker
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *markerRangeDescription; // ivar: _markerRangeDescription
@property (retain, nonatomic) AXAuditTextMarker *startMarker; // ivar: _startMarker
@property (readonly) Class superclass;


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif