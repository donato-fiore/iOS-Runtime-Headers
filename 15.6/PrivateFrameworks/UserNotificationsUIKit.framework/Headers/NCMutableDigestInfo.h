// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCMUTABLEDIGESTINFO_H
#define NCMUTABLEDIGESTINFO_H

@class NSString, NSDate, NSDateComponents;


#import "NCDigestInfo.h"

@interface NCMutableDigestInfo : NCDigestInfo

@property (nonatomic) NSInteger deliveryOrder;
@property (copy, nonatomic) NSString *headerString;
@property (copy, nonatomic) NSDate *scheduleDate;
@property (copy, nonatomic) NSDateComponents *scheduleTime;
@property (copy, nonatomic) NSString *titleString;




@end


#endif