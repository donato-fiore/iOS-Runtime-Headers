// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDSCOPEDIDS_H
#define GKCDSCOPEDIDS_H

@class NSManagedObject, NSString;



@interface GKCDScopedIds : NSManagedObject

@property (copy, nonatomic) NSString *gameBundleId;
@property (copy, nonatomic) NSString *gamePlayerId;
@property (copy, nonatomic) NSString *playerId;
@property (copy, nonatomic) NSString *teamPlayerId;


+(id)fetchRequest;


@end


#endif