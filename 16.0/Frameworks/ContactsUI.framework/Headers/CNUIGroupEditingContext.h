// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIGROUPEDITINGCONTEXT_H
#define CNUIGROUPEDITINGCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNUIGroupEditingContext : NSObject

@property (retain, nonatomic) NSArray *addedGroups; // ivar: _addedGroups
@property (readonly, nonatomic) NSArray *groupsToDisplayForEditing;
@property (readonly, nonatomic) NSArray *originalGroups; // ivar: _originalGroups
@property (retain, nonatomic) NSArray *removedGroups; // ivar: _removedGroups


-(BOOL)group:(id)arg0 isInGroupArray:(id)arg1 ;
-(id)init;
-(id)initWithOriginalGroups:(id)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)removeGroup:(id)arg0 ;


@end


#endif