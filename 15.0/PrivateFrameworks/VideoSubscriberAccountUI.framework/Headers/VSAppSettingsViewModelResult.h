// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSAPPSETTINGSVIEWMODELRESULT_H
#define VSAPPSETTINGSVIEWMODELRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VSAppSettingsViewModelResult : NSObject

@property (copy, nonatomic) NSArray *channelAppViewModels; // ivar: _channelAppViewModels
@property (copy, nonatomic) NSArray *nonChannelAppViewModels; // ivar: _nonChannelAppViewModels


-(id)init;


@end


#endif