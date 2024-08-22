// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVINDEXUPDATERFACTORY_H
#define CKVINDEXUPDATERFACTORY_H


#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVIndexUpdaterFactory : NSObject {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
    CGFloat _timeout;
}




-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)updaterForRequest:(id)arg0 ;


@end


#endif