// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLRTRIALTASK_H
#define MLRTRIALTASK_H

@class TRIClient;

#import <Foundation/Foundation.h>


@interface MLRTrialTask : NSObject

@property (readonly, nonatomic) TRIClient *triClient; // ivar: _triClient


+(void)initialize;
-(id)description;
-(id)initWithTriClient:(id)arg0 ;
-(id)initWithTrialTask:(id)arg0 ;


@end


#endif