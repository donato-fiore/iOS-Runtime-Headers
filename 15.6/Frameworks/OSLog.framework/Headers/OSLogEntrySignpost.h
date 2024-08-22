// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGENTRYSIGNPOST_H
#define OSLOGENTRYSIGNPOST_H

@class NSString, NSArray;
@protocol OSLogEntryFromProcess, OSLogEntryWithPayload;


#import "OSLogEntry.h"

@interface OSLogEntrySignpost : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload>



@property (readonly, nonatomic) NSUInteger activityIdentifier; // ivar: _activityIdentifier
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) NSString *formatString; // ivar: _formatString
@property (readonly, nonatomic) NSString *process; // ivar: _process
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) NSString *sender; // ivar: _sender
@property (readonly, nonatomic) NSUInteger signpostIdentifier; // ivar: _signpostIdentifier
@property (readonly, nonatomic) NSString *signpostName; // ivar: _signpostName
@property (readonly, nonatomic) NSInteger signpostType; // ivar: _signpostType
@property (readonly, nonatomic) NSString *subsystem; // ivar: _subsystem
@property (readonly, nonatomic) NSUInteger threadIdentifier; // ivar: _threadIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventProxy:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif