// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTRAVELDURATION_H
#define ICSTRAVELDURATION_H

@class NSString;


#import "ICSProperty.h"
#import "ICSDuration.h"

@interface ICSTravelDuration : ICSProperty

@property (retain, nonatomic) ICSDuration *duration;
@property (retain, nonatomic) NSString *transparency;


-(BOOL)alwaysHasParametersToSerialize;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 additionalParameters:(id)arg2 ;


@end


#endif