// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTDATEANCHORRULE_H
#define FIUICHARTDATEANCHORRULE_H


#import <Foundation/Foundation.h>


@interface FIUIChartDateAnchorRule : NSObject

@property (nonatomic) NSUInteger calendarUnit; // ivar: _calendarUnit
@property (nonatomic) NSInteger roundingValue; // ivar: _roundingValue


-(BOOL)_componentsSuccessful:(id)arg0 ;
-(id)_anchorDiffComponents;
-(id)_floorDate:(id)arg0 ;
-(id)generateAnchorFromDate:(id)arg0 ;


@end


#endif