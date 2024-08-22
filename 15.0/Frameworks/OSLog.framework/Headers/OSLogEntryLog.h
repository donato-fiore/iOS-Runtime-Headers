// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGENTRYLOG_H
#define OSLOGENTRYLOG_H

@class NSString, NSArray;
@protocol OSLogEntryFromProcess, OSLogEntryWithPayload;


#import "OSLogEntry.h"

@interface OSLogEntryLog : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload>



@property (readonly, nonatomic) NSUInteger activityIdentifier; // ivar: _activityIdentifier
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) NSString *formatString; // ivar: _formatString
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (readonly, nonatomic) NSString *process; // ivar: _process
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) NSString *sender; // ivar: _sender
@property (readonly, nonatomic) NSString *subsystem; // ivar: _subsystem
@property (readonly, nonatomic) NSUInteger threadIdentifier; // ivar: _threadIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 composedMessage:(id)arg1 processIdentifier:(int)arg2 ;
-(id)initWithEventProxy:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif