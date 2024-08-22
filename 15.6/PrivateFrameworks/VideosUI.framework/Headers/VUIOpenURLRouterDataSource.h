// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIOPENURLROUTERDATASOURCE_H
#define VUIOPENURLROUTERDATASOURCE_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "VUIAction.h"

@interface VUIOpenURLRouterDataSource : NSObject

@property (retain, nonatomic) VUIAction *action; // ivar: _action
@property (nonatomic) BOOL actionFirst; // ivar: _actionFirst
@property (copy, nonatomic) NSArray *documentDataSources; // ivar: _documentDataSources
@property (copy, nonatomic) NSDictionary *localLibraryLink; // ivar: _localLibraryLink
@property (retain, nonatomic) NSString *nativePageName; // ivar: _nativePageName
@property (retain, nonatomic) NSString *tabIdentifier; // ivar: _tabIdentifier


+(id)routerDataSourceWithDict:(id)arg0 appContext:(id)arg1 ;


@end


#endif