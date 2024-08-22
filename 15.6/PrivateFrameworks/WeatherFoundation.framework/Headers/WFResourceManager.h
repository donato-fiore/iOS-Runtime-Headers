// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRESOURCEMANAGER_H
#define WFRESOURCEMANAGER_H


#import <Foundation/Foundation.h>


@interface WFResourceManager : NSObject



+(id)sharedManager;
-(id)frameworkBundle;
-(id)localizedStringForKey:(id)arg0 ;
-(id)tableName;


@end


#endif