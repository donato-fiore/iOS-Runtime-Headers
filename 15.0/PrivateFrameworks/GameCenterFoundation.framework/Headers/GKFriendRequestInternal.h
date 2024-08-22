// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKFRIENDREQUESTINTERNAL_H
#define GKFRIENDREQUESTINTERNAL_H

@class NSDate, NSString;


#import "GKFamiliarPlayerInternal.h"

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *message; // ivar: _message


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(int)defaultFamiliarity;


@end


#endif