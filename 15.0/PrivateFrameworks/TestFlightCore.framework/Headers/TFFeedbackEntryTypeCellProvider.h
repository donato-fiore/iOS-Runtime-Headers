// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKENTRYTYPECELLPROVIDER_H
#define TFFEEDBACKENTRYTYPECELLPROVIDER_H


#import <Foundation/Foundation.h>


@interface TFFeedbackEntryTypeCellProvider : NSObject



+(Class)cellClassForEntryType:(NSUInteger)arg0 ;
+(id)reuseIdentifierForEntryType:(NSUInteger)arg0 ;
+(struct CGSize )cellSizeForEntry:(id)arg0 dataSource:(id)arg1 fittingSize:(struct CGSize )arg2 inTraitEnvironment:(id)arg3 ;


@end


#endif