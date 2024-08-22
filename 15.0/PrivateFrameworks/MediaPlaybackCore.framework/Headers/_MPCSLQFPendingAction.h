// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCSLQFPENDINGACTION_H
#define _MPCSLQFPENDINGACTION_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface _MPCSLQFPendingAction : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSString *label; // ivar: _label


-(id)description;


@end


#endif