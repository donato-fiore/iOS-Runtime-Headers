// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCOMPARATOR_H
#define CRKCOMPARATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRKComparator : NSObject

@property (readonly, nonatomic) NSMutableArray *allCriteria; // ivar: _allCriteria


+(id)compare:(SEL)arg0 ;
+(id)compareWithCriteria:(id)arg0 ;
-(NSInteger)runComparison;
-(id)compare:(SEL)arg0 ;
-(id)compareWithCriteria:(id)arg0 ;
-(id)init;
-(id)run:(SEL)arg0 ;


@end


#endif