// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFASSOCIATIONCONTEXT_H
#define WFASSOCIATIONCONTEXT_H

@class NSDate, NSString, NSDictionary;
@protocol WFNetworkListRecord;

#import <Foundation/Foundation.h>


@interface WFAssociationContext : NSObject

@property (retain, nonatomic) NSDate *associationStart; // ivar: _associationStart
@property (retain, nonatomic) NSObject<WFNetworkListRecord> *network; // ivar: _network
@property (nonatomic) NSUInteger originator; // ivar: _originator
@property (readonly, nonatomic) NSString *originatorDescription;
@property (nonatomic) BOOL secondaryScanCompleted; // ivar: _secondaryScanCompleted
@property (copy, nonatomic) NSDictionary *sectionCounts; // ivar: _sectionCounts
@property (copy, nonatomic) NSString *sectionNameJoined; // ivar: _sectionNameJoined
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSString *stateDescription;


-(id)description;
-(id)formattedStartDate;
-(id)initWithNetwork:(id)arg0 ;


@end


#endif