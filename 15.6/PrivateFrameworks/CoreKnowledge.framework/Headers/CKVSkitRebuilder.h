// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSKITREBUILDER_H
#define CKVSKITREBUILDER_H


#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVLocalization.h"

@interface CKVSkitRebuilder : NSObject {
    CKVIndexManager *_indexManager;
    CKVLocalization *_localization;
}




-(BOOL)_rebuildSkitUsingLocale:(id)arg0 assetPath:(id)arg1 skitDidOpen:(*BOOL)arg2 ;
-(BOOL)rebuildWithAllVocabulary;
-(id)init;
-(id)initWithIndexManager:(id)arg0 localization:(id)arg1 ;


@end


#endif