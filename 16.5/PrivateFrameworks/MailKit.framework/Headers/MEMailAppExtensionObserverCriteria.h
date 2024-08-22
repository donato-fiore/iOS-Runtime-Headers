// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEMAILAPPEXTENSIONOBSERVERCRITERIA_H
#define MEMAILAPPEXTENSIONOBSERVERCRITERIA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MEMailAppExtensionObserverCriteria : NSObject

@property (readonly, nonatomic) NSArray *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) BOOL includeDisabled; // ivar: _includeDisabled


-(id)initWithCapabilities:(id)arg0 includeDisabled:(BOOL)arg1 ;


@end


#endif