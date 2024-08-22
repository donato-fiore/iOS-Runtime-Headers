// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DARESPONSE_H
#define DARESPONSE_H



#import "DAAction.h"

@interface DAResponse : DAAction

@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemChangeType:(NSUInteger)arg0 changedItem:(id)arg1 serverId:(id)arg2 status:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif