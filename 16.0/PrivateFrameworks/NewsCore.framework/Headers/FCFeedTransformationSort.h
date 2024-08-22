// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDTRANSFORMATIONSORT_H
#define FCFEEDTRANSFORMATIONSORT_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationSort : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)transformationWithSortMethod:(NSInteger)arg0 ;
+(id)transformationWithSortMethod:(NSInteger)arg0 configurationSet:(NSInteger)arg1 personalizer:(id)arg2 ;
+(id)transformationWithSortMethod:(NSInteger)arg0 personalizer:(id)arg1 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif