// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEFILTERREPORT_H
#define NEFILTERREPORT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NEFilterFlow.h"

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying>



@property NSInteger action; // ivar: _action
@property NSUInteger bytesInboundCount; // ivar: _bytesInboundCount
@property NSUInteger bytesOutboundCount; // ivar: _bytesOutboundCount
@property (readonly) NSInteger event; // ivar: _event
@property (retain) NEFilterFlow *flow; // ivar: _flow


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif