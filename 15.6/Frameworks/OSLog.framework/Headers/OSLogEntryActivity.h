// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGENTRYACTIVITY_H
#define OSLOGENTRYACTIVITY_H

@class NSString;
@protocol OSLogEntryFromProcess;


#import "OSLogEntry.h"

@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess>



@property (readonly, nonatomic) NSUInteger activityIdentifier; // ivar: _activityIdentifier
@property (readonly, nonatomic) NSUInteger parentActivityIdentifier; // ivar: _parentActivityIdentifier
@property (readonly, nonatomic) NSString *process; // ivar: _process
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) NSString *sender; // ivar: _sender
@property (readonly, nonatomic) NSUInteger threadIdentifier; // ivar: _threadIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventProxy:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif