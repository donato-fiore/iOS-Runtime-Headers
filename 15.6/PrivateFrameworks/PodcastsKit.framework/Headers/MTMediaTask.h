// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTMEDIATASK_H
#define MTMEDIATASK_H

@class NSArray, AMSMediaTask;

#import <Foundation/Foundation.h>


@interface MTMediaTask : NSObject

@property (nonatomic) BOOL charts; // ivar: _charts
@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) AMSMediaTask *mediaTask; // ivar: _mediaTask


-(id)initWithType:(NSInteger)arg0 ;
-(void)perform:(id)arg0 ;


@end


#endif