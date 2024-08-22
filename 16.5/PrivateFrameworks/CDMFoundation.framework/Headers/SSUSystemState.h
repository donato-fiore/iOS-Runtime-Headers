// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUSYSTEMSTATE_H
#define SSUSYSTEMSTATE_H

@protocol SSUCacheDirectoryProvider, SSUInstalledAppProvider;

#import <Foundation/Foundation.h>


@interface SSUSystemState : NSObject

@property (readonly, nonatomic) NSObject<SSUCacheDirectoryProvider> *cacheDirectoryProvider; // ivar: _cacheDirectoryProvider
@property (readonly, nonatomic) NSObject<SSUInstalledAppProvider> *installedAppProvider; // ivar: _installedAppProvider


-(id)initWithCacheDirectoryProvider:(id)arg0 installedAppProvider:(id)arg1 ;


@end


#endif