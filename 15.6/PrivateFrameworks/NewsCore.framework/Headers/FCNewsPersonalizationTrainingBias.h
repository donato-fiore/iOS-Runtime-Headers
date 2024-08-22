// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNEWSPERSONALIZATIONTRAININGBIAS_H
#define FCNEWSPERSONALIZATIONTRAININGBIAS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationTrainingBias : NSObject

@property (nonatomic) CGFloat bias; // ivar: _bias
@property (retain, nonatomic) NSString *eventType; // ivar: _eventType
@property (retain, nonatomic) NSString *feedType; // ivar: _feedType
@property (retain, nonatomic) NSString *groupType; // ivar: _groupType
@property (readonly, nonatomic) NSString *identifier;


+(id)identifierForEventType:(id)arg0 feedType:(id)arg1 groupType:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif