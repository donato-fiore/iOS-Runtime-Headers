// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFRIENDLISTSECTION_H
#define ASFRIENDLISTSECTION_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface ASFriendListSection : NSObject

@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *rows; // ivar: _rows
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)containsFriendListRow:(id)arg0 ;
-(id)initWithDate:(id)arg0 andRows:(id)arg1 ;


@end


#endif