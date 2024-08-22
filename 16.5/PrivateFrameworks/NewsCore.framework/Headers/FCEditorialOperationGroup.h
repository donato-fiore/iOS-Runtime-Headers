// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCEDITORIALOPERATIONGROUP_H
#define FCEDITORIALOPERATIONGROUP_H

@class NSArray, NSDate;
@protocol FCSectionProviding;

#import <Foundation/Foundation.h>


@interface FCEditorialOperationGroup : NSObject

@property (retain, nonatomic) NSArray *headlines; // ivar: _headlines
@property (retain, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (retain, nonatomic) NSObject<FCSectionProviding> *section; // ivar: _section




@end


#endif