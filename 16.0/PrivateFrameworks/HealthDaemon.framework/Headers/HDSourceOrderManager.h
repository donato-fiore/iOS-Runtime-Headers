// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSOURCEORDERMANAGER_H
#define HDSOURCEORDERMANAGER_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseValueCache.h"

@interface HDSourceOrderManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_sourceOrdersForTypeCache;
}




-(BOOL)addOrderedSource:(id)arg0 objectTypes:(id)arg1 error:(*id)arg2 ;
-(BOOL)createSourceOrdersWithCodables:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetCacheWithError:(*id)arg0 ;
-(BOOL)updateOrderedSources:(id)arg0 forObjectType:(id)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 ;
-(id)orderedSourceIDsForObjectType:(id)arg0 error:(*id)arg1 ;
-(id)orderedSourceIDsWithUnorderedIDs:(id)arg0 objectType:(id)arg1 error:(*id)arg2 ;
-(id)orderedSourcesForObjectType:(id)arg0 error:(*id)arg1 ;
-(void)resetCacheWithTransaction:(id)arg0 ;


@end


#endif