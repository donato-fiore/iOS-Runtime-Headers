// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRMONITORLOG_H
#define SPRMONITORLOG_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface SPRMonitorLog : NSObject

@property (copy) NSString *component; // ivar: _component
@property (nonatomic, readonly) NSString *description;
@property (copy) NSData *details; // ivar: _details
@property (copy) NSString *event; // ivar: _event
@property (readonly) NSInteger logType; // ivar: _logType
@property (copy) NSString *origin; // ivar: _origin


+(id)getEventString:(NSInteger)arg0 ;
-(id)initWithAudit:(id)arg0 details:(id)arg1 origin:(id)arg2 component:(id)arg3 ;
-(id)initWithEvent:(NSInteger)arg0 details:(id)arg1 origin:(id)arg2 component:(id)arg3 ;
-(id)initWithIncident:(id)arg0 details:(id)arg1 origin:(id)arg2 component:(id)arg3 ;


@end


#endif