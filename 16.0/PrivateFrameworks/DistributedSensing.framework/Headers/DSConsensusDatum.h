// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSCONSENSUSDATUM_H
#define DSCONSENSUSDATUM_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface DSConsensusDatum : NSObject

@property (nonatomic) unsigned char confidence; // ivar: _confidence
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDate *time; // ivar: _time


-(id)initWithIdentifier:(id)arg0 andConfidence:(unsigned char)arg1 atTime:(id)arg2 ;
-(void)printInfo;


@end


#endif