// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYFEEDPPTCONFIGURATION_H
#define PXSTORYFEEDPPTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PXStoryFeedConfiguration.h"

@interface PXStoryFeedPPTConfiguration : NSObject

@property (readonly, nonatomic) PXStoryFeedConfiguration *feedConfiguration; // ivar: _feedConfiguration
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)configurationsForPreset:(NSUInteger)arg0 testOptions:(id)arg1 ;
-(id)init;
-(id)initWithName:(id)arg0 feedConfiguration:(id)arg1 ;
-(id)initWithPreset:(NSUInteger)arg0 ;


@end


#endif