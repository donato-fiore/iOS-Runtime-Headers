// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATMUTABLEACCOUNTINFO_H
#define ATMUTABLEACCOUNTINFO_H

@class NSNumber, NSString;


#import "ATAccountInfo.h"

@interface ATMutableAccountInfo : ATAccountInfo

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *appleID;




@end


#endif