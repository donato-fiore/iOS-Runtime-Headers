// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIPLUGINDATACONTAINER_H
#define MIPLUGINDATACONTAINER_H

@class NSString;


#import "MIDataContainer.h"

@interface MIPluginDataContainer : MIDataContainer

@property (copy, nonatomic) NSString *parentBundleID; // ivar: _parentBundleID


+(id)pluginDataContainerWithIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 created:(*BOOL)arg2 error:(*id)arg3 ;


@end


#endif