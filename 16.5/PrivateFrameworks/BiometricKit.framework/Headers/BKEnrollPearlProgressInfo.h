// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKENROLLPEARLPROGRESSINFO_H
#define BKENROLLPEARLPROGRESSINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BKEnrollPearlProgressInfo : NSObject

@property (retain, nonatomic) NSArray *enrolledPoses; // ivar: _enrolledPoses
@property (nonatomic) NSInteger percentageCompleted; // ivar: _percentageCompleted


-(?)initFromEnrollInfo;
-(id)dictionary;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithPercents:(NSInteger)arg0 ;


@end


#endif