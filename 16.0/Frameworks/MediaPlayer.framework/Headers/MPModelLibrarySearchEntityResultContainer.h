// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYSEARCHENTITYRESULTCONTAINER_H
#define MPMODELLIBRARYSEARCHENTITYRESULTCONTAINER_H


#import <Foundation/Foundation.h>

#import "MPMediaLibraryEntityTranslationContext.h"
#import "MPModelLibrarySearchScope.h"

@interface MPModelLibrarySearchEntityResultContainer : NSObject

@property (readonly, nonatomic) shared_ptr<mlcore::EntityQueryResult> entityQueryResult; // ivar: _entityQueryResult
@property (readonly, nonatomic) MPMediaLibraryEntityTranslationContext *entityTranslationContext; // ivar: _entityTranslationContext
@property (readonly, copy, nonatomic) MPModelLibrarySearchScope *scope; // ivar: _scope


-(?)initWithEntityQueryResult:(?)arg0 forScopeentityTranslationContext;


@end


#endif