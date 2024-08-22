// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARALIGNMENTSTATE_H
#define _EARALIGNMENTSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARAlignmentState : NSObject <NSCopying>



@property (nonatomic) NSInteger numberOfDeletions; // ivar: _numberOfDeletions
@property (nonatomic) NSInteger numberOfInsertions; // ivar: _numberOfInsertions
@property (nonatomic) NSInteger numberOfSubstitutions; // ivar: _numberOfSubstitutions
@property (nonatomic) NSInteger totalCost; // ivar: _totalCost


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)incrementCost;
-(void)incrementDeletions;
-(void)incrementInsertions;
-(void)incrementSubstitutions;


@end


#endif