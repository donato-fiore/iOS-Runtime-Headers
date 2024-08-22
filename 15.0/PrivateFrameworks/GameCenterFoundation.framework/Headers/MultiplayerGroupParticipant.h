// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MULTIPLAYERGROUPPARTICIPANT_H
#define MULTIPLAYERGROUPPARTICIPANT_H

@class NSManagedObject, NSString;



@interface MultiplayerGroupParticipant : NSManagedObject

@property (copy, nonatomic) NSString *playerID;


+(id)fetchRequest;


@end


#endif