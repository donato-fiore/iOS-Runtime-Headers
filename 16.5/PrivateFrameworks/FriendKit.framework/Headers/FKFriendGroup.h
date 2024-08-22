// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FKFRIENDGROUP_H
#define FKFRIENDGROUP_H

@class NSMutableArray, NSString;
@protocol FKFriendGroupDelegate;

#import <Foundation/Foundation.h>


@interface FKFriendGroup : NSObject {
    NSMutableArray *_friendsManager;
    NSUInteger _groupSize;
}


@property (weak, nonatomic) NSObject<FKFriendGroupDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger selectedPosition; // ivar: _selectedPosition
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)containsFriend:(id)arg0 ;
-(BOOL)isFull;
-(NSInteger)_firstEmptyPosition;
-(NSUInteger)count;
-(NSUInteger)positionOfFriend:(id)arg0 ;
-(id)displayNameForGroupWithSeparator:(id)arg0 ;
-(id)friendAtPosition:(NSUInteger)arg0 ;
-(id)friends;
-(id)init;
-(id)initWithDelegate:(id)arg0 groupSize:(NSUInteger)arg1 ;
-(id)initWithGroupSize:(NSUInteger)arg0 ;
-(void)addFriend:(id)arg0 error:(*unsigned int)arg1 ;
-(void)removeFriendAtPosition:(NSUInteger)arg0 ;
-(void)setFriend:(id)arg0 atPosition:(NSUInteger)arg1 error:(*unsigned int)arg2 ;
-(void)setFriends:(id)arg0 ;


@end


#endif