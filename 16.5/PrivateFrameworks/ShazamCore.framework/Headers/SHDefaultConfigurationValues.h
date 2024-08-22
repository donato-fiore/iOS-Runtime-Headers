// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHDEFAULTCONFIGURATIONVALUES_H
#define SHDEFAULTCONFIGURATIONVALUES_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SHDefaultConfigurationValues : NSObject

@property (readonly, copy, nonatomic) NSString *campaignGroup;
@property (readonly, nonatomic) NSDictionary *defaultValues; // ivar: _defaultValues
@property (readonly, nonatomic) CGFloat recordingIntermission;


-(id)initWithConfiguration:(id)arg0 ;


@end


#endif