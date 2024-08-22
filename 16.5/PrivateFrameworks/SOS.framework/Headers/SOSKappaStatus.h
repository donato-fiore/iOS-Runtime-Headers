// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSKAPPASTATUS_H
#define SOSKAPPASTATUS_H


#import <Foundation/Foundation.h>

#import "SOSStatus.h"

@interface SOSKappaStatus : NSObject

@property (readonly, nonatomic) BOOL isKappaFlow;
@property (readonly, nonatomic) BOOL isKappaFlowActive;
@property (nonatomic) NSInteger sosKappaState; // ivar: _sosKappaState
@property (readonly, nonatomic) SOSStatus *sosStatus; // ivar: _sosStatus


-(id)description;
-(id)init;
-(id)initWithSOSStatus:(id)arg0 ;


@end


#endif