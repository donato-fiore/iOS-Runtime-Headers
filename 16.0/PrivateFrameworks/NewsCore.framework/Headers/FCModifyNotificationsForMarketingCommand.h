// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCMODIFYNOTIFICATIONSFORMARKETINGCOMMAND_H
#define FCMODIFYNOTIFICATIONSFORMARKETINGCOMMAND_H

@class NSString;


#import "FCCommand.h"

@interface FCModifyNotificationsForMarketingCommand : FCCommand

@property (nonatomic) int action; // ivar: _action
@property (copy, nonatomic) NSString *dsid; // ivar: _dsid
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 action:(int)arg1 iTunesDSID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif