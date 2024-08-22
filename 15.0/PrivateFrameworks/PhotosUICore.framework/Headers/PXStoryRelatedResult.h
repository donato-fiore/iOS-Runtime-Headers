// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRELATEDRESULT_H
#define PXSTORYRELATEDRESULT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PXStoryRelatedResult : NSObject

@property (readonly, nonatomic) NSString *debugInfo; // ivar: _debugInfo
@property (readonly, nonatomic) NSArray *storyConfigurations; // ivar: _storyConfigurations


-(id)initWithStoryConfigurations:(id)arg0 debugInfo:(id)arg1 ;


@end


#endif