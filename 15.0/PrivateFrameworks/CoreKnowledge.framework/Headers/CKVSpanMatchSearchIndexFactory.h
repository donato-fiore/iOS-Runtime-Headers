// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHSEARCHINDEXFACTORY_H
#define CKVSPANMATCHSEARCHINDEXFACTORY_H

@class NSString;
@protocol CKVSpanMatchSearchIndexProvider;

#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVSpanMatchSearchIndexFactory : NSObject <CKVSpanMatchSearchIndexProvider>

 {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;
-(id)makeSearchIndex;


@end


#endif