// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIEVENTDATASOURCE_H
#define VUIEVENTDATASOURCE_H


#import <Foundation/Foundation.h>

#import "VUIAction.h"
#import "VUIDocumentDataSource.h"

@interface VUIEventDataSource : NSObject

@property (retain, nonatomic) VUIAction *action; // ivar: _action
@property (retain, nonatomic) VUIDocumentDataSource *documentDataSource; // ivar: _documentDataSource
@property (retain, nonatomic) VUIAction *postAction; // ivar: _postAction
@property (retain, nonatomic) VUIDocumentDataSource *postActionDocumentDataSource; // ivar: _postActionDocumentDataSource
@property (retain, nonatomic) VUIAction *preAction; // ivar: _preAction
@property (retain, nonatomic) VUIDocumentDataSource *preActionDocumentDataSource; // ivar: _preActionDocumentDataSource


+(id)_actionForKey:(id)arg0 eventDict:(id)arg1 appContext:(id)arg2 ;
+(id)_documentDataSourceWithDict:(id)arg0 ;
+(id)attachPrefetchedDict:(id)arg0 eventDict:(id)arg1 ;
+(id)eventDataSourceWithEventDict:(id)arg0 appContext:(id)arg1 ;


@end


#endif