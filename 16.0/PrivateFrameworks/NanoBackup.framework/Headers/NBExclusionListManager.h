// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NBEXCLUSIONLISTMANAGER_H
#define NBEXCLUSIONLISTMANAGER_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface NBExclusionListManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *excludedPerGizmoDomainSettings; // ivar: _excludedPerGizmoDomainSettings
@property (retain, nonatomic) NSSet *excludedPerGizmoDomains; // ivar: _excludedPerGizmoDomains
@property (nonatomic) BOOL hasReadConfiguration; // ivar: _hasReadConfiguration


-(id)excludedKeysInDomain:(id)arg0 ;
-(void)purgeCache;
-(void)readConfigurationIfNeeded;


@end


#endif