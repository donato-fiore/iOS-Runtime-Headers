// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDPPTCONFIGURATION_H
#define PXFEEDPPTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PXFeedConfiguration.h"

@interface PXFeedPPTConfiguration : NSObject

@property (readonly, nonatomic) PXFeedConfiguration *feedConfiguration; // ivar: _feedConfiguration
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)configurationsForPreset:(NSUInteger)arg0 testOptions:(id)arg1 ;
-(id)init;
-(id)initWithName:(id)arg0 feedConfiguration:(id)arg1 ;
-(id)initWithPreset:(NSUInteger)arg0 ;


@end


#endif