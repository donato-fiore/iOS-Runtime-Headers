// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPERSISTENCEMANAGERSETTINGS_H
#define SAPERSISTENCEMANAGERSETTINGS_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SAPersistenceManagerSettings : NSObject

@property (retain, nonatomic) NSURL *persistenceDirectoryURL; // ivar: _persistenceDirectoryURL
@property (retain, nonatomic) NSString *persistenceStoreFileName; // ivar: _persistenceStoreFileName


-(id)_getStoreURL;
-(id)init;
-(id)initWithDirectoryURLOrDefault:(id)arg0 storeFileNameOrDefault:(id)arg1 ;


@end


#endif