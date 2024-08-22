// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITTEXTMARKER_H
#define AXAUDITTEXTMARKER_H

@class NSString;
@protocol AXAuditTransportableObjectProtocol;

#import <Foundation/Foundation.h>


@interface AXAuditTextMarker : NSObject <AXAuditTransportableObjectProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *markerDescription; // ivar: _markerDescription
@property (retain, nonatomic) id *platformMarker; // ivar: _platformMarker
@property (readonly) Class superclass;


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif