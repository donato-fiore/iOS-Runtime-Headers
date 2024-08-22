// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FILTER_H
#define FILTER_H


#import <Foundation/Foundation.h>


@interface Filter : NSObject

@property (nonatomic) NSInteger queueLenAlert; // ivar: _queueLenAlert
@property (nonatomic) NSInteger queueLenDrop; // ivar: _queueLenDrop
@property (nonatomic) NSInteger queueTimeLimit; // ivar: _queueTimeLimit
@property (nonatomic) NSInteger subsystemId; // ivar: _subsystemId
@property (nonatomic) unsigned int symptomId; // ivar: _symptomId


+(id)initForSymptom:(unsigned int)arg0 withParams:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif