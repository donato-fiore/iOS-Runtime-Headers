// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRMONITORLOG_H
#define SPRMONITORLOG_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRMonitorLog : NSObject <NSSecureCoding>



@property (copy) NSString *component; // ivar: _component
@property (copy) NSData *details; // ivar: _details
@property (copy) NSString *event; // ivar: _event
@property (readonly) NSInteger logType; // ivar: _logType
@property (copy) NSString *origin; // ivar: _origin


+(BOOL)supportsSecureCoding;
+(id)getEventString:(NSInteger)arg0 ;
-(id)description;
-(id)initWithAudit:(id)arg0 details:(id)arg1 origin:(id)arg2 component:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(NSInteger)arg0 details:(id)arg1 origin:(id)arg2 component:(id)arg3 ;
-(id)initWithIncident:(id)arg0 details:(id)arg1 origin:(id)arg2 component:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif