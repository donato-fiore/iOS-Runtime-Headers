// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPEOPLE_H
#define IMPEOPLE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface IMPeople : NSObject {
    NSMutableArray *_people;
    int _coalesceCount;
}


@property (readonly, nonatomic) BOOL coalescingChanges;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *groups;
@property (nonatomic, setter=setShouldHidePeople:) BOOL hidePeople; // ivar: _hidePeople
@property (readonly, nonatomic) NSArray *people;


-(BOOL)addIMHandle:(id)arg0 ;
-(BOOL)addPeopleFromArray:(id)arg0 ;
-(BOOL)addPeopleFromArray:(id)arg0 skipMe:(BOOL)arg1 ;
-(BOOL)containsIMHandle:(id)arg0 ;
-(BOOL)removeIMHandle:(id)arg0 ;
-(BOOL)removePeopleFromArray:(id)arg0 ;
-(void)_addedPeople:(id)arg0 ;
-(void)addNotificationObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)addedIMHandle:(id)arg0 ;
-(void)beginCoalescedChanges;
-(void)dealloc;
-(void)endCoalescedChanges;
-(void)imHandle:(id)arg0 buddyStatusChanged:(BOOL)arg1 ;
-(void)removeNotificationObserver:(id)arg0 ;
-(void)removedIMHandle:(id)arg0 ;


@end


#endif