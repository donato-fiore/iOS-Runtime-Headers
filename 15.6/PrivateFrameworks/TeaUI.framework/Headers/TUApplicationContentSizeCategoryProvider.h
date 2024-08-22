// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUAPPLICATIONCONTENTSIZECATEGORYPROVIDER_H
#define TUAPPLICATIONCONTENTSIZECATEGORYPROVIDER_H

@class NSString;
@protocol TUContentSizeCategoryProviderType;

#import <Foundation/Foundation.h>


@interface TUApplicationContentSizeCategoryProvider : NSObject <TUContentSizeCategoryProviderType>



@property (nonatomic, readonly) NSString *currentContentSizeCategory;


-(id)init;


@end


#endif