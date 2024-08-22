// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMICLOUDISOFFCLOUDCONFIGURATIONSTORAGE_H
#define _REMICLOUDISOFFCLOUDCONFIGURATIONSTORAGE_H

@protocol REMICloudIsOffCloudConfiguration;

#import <Foundation/Foundation.h>


@interface _REMICloudIsOffCloudConfigurationStorage : NSObject <REMICloudIsOffCloudConfiguration>



@property (readonly, nonatomic) CGFloat iCloudIsOffTimeIntervalSinceLastPrompt; // ivar: _iCloudIsOffTimeIntervalSinceLastPrompt


-(id)initWithTimeIntervalSinceLastPrompt:(CGFloat)arg0 ;


@end


#endif