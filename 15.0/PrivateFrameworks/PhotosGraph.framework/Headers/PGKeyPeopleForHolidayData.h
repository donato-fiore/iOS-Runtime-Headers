// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGKEYPEOPLEFORHOLIDAYDATA_H
#define PGKEYPEOPLEFORHOLIDAYDATA_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>

#import "PGGraphPersonNode.h"
#import "PGGraphSocialGroupNode.h"

@interface PGKeyPeopleForHolidayData : NSObject

@property (retain, nonatomic) NSMutableSet *holidayRules; // ivar: _holidayRules
@property (retain, nonatomic) NSMutableSet *momentNodes; // ivar: _momentNodes
@property (retain, nonatomic) PGGraphPersonNode *personNode; // ivar: _personNode
@property (readonly) CGFloat score;
@property (retain, nonatomic) PGGraphSocialGroupNode *socialGroupNode; // ivar: _socialGroupNode
@property (readonly) NSString *uuid;


-(id)init;
-(id)initWithPersonNode:(id)arg0 ;
-(id)initWithSocialGroupNode:(id)arg0 ;


@end


#endif