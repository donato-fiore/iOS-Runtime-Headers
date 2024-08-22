// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRTRIALTASKRESULT_H
#define MLRTRIALTASKRESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MLRTrialTaskResult : NSObject

@property (readonly, nonatomic) NSDictionary *JSONResult; // ivar: _JSONResult


-(BOOL)submitForTask:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithJSONResult:(id)arg0 ;


@end


#endif