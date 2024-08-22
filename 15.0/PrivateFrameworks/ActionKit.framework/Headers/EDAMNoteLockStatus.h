// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMNOTELOCKSTATUS_H
#define EDAMNOTELOCKSTATUS_H

@class NSNumber, NSDictionary, NSArray;


#import "FATObject.h"

@interface EDAMNoteLockStatus : FATObject

@property (retain, nonatomic) NSNumber *currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSNumber *lockHolderUserId; // ivar: _lockHolderUserId
@property (retain, nonatomic) NSNumber *lockRenewBy; // ivar: _lockRenewBy
@property (retain, nonatomic) NSNumber *noteUpdateSequenceNumber; // ivar: _noteUpdateSequenceNumber
@property (retain, nonatomic) NSDictionary *unknownUsers; // ivar: _unknownUsers
@property (retain, nonatomic) NSNumber *viewIdleExpiration; // ivar: _viewIdleExpiration
@property (retain, nonatomic) NSArray *viewingUserIds; // ivar: _viewingUserIds


+(id)structFields;
+(id)structName;


@end


#endif