// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTAINERDATASOURCE_H
#define CNCONTAINERDATASOURCE_H

@class NSArray, CNContactStore;

#import <Foundation/Foundation.h>

#import "CNContactViewCache.h"

@interface CNContainerDataSource : NSObject

@property (retain, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (retain, nonatomic) NSArray *containerPickerItems; // ivar: _containerPickerItems
@property (retain, nonatomic) NSArray *containers; // ivar: _containers
@property (nonatomic) BOOL ignoresExchangeContainers; // ivar: _ignoresExchangeContainers
@property (retain, nonatomic) CNContactStore *store; // ivar: _store


+(id)os_log;
-(id)allAccounts;
-(id)initWithContactStore:(id)arg0 ;
-(id)writableContainersForAccount:(id)arg0 ;
-(void)discoverContainers;


@end


#endif