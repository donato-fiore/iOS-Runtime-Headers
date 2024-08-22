// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVDATABASESEARCHERFACTORY_H
#define CKVDATABASESEARCHERFACTORY_H

@class NSString;
@protocol CKVDatabaseSearcherProvider;

#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"

@interface CKVDatabaseSearcherFactory : NSObject <CKVDatabaseSearcherProvider>

 {
    CKVIndexManager *_indexManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIndexManager:(id)arg0 ;
-(id)makeDatabaseSearcher;


@end


#endif