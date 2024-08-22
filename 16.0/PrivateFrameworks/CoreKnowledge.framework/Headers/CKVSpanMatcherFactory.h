// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSPANMATCHERFACTORY_H
#define CKVSPANMATCHERFACTORY_H


#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVSpanMatcherFactory : NSObject {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
}




-(id)init;
-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;
-(id)makeSpanMatcher;


@end


#endif