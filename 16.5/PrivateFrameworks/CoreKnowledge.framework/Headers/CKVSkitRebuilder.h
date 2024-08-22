// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSKITREBUILDER_H
#define CKVSKITREBUILDER_H


#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVLocalization.h"

@interface CKVSkitRebuilder : NSObject {
    CKVIndexManager *_indexManager;
    CKVLocalization *_localization;
}




+(unsigned short)rebuildSkit:(id)arg0 database:(id)arg1 log:(id)arg2 description:(id)arg3 locale:(NSInteger)arg4 assetPath:(id)arg5 ;
-(BOOL)rebuildForUser:(id)arg0 ;
-(id)init;
-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;


@end


#endif