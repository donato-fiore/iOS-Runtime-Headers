// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVINDEXUPDATERFACTORY_H
#define CKVINDEXUPDATERFACTORY_H


#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVIndexUpdaterFactory : NSObject {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
}




-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;
-(id)updaterForRequest:(id)arg0 ;


@end


#endif