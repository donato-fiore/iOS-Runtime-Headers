// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPRIVATEDATASYNCAVAILABILITY_H
#define FCPRIVATEDATASYNCAVAILABILITY_H

@class NSArray;
@protocol FCPrivateDataSyncAvailability;

#import <Foundation/Foundation.h>


@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability>



@property (readonly, copy, nonatomic) NSArray *conditions; // ivar: _conditions
@property (readonly, nonatomic, getter=isPrivateDataSyncingAllowed) BOOL privateDataSyncingAllowed;


+(id)defaultAvailability;
+(id)notAvailable;
-(id)initWithConditions:(id)arg0 ;


@end


#endif