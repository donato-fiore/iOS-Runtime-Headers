// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COALARMOPERATION_H
#define COALARMOPERATION_H

@class MTAlarm;

#import <Foundation/Foundation.h>


@interface COAlarmOperation : NSObject

@property (readonly, copy, nonatomic) MTAlarm *alarm; // ivar: _alarm
@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)performOperationWithMappedAlarms:(id)arg0 ;
-(id)initForAdding:(id)arg0 completion:(id)arg1 ;
-(id)initForRemoving:(id)arg0 completion:(id)arg1 ;
-(id)initForUpdating:(id)arg0 completion:(id)arg1 ;


@end


#endif