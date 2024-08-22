// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINSTALLEDSUGGESTEDPAGESTRACKER_H
#define ATXINSTALLEDSUGGESTEDPAGESTRACKER_H

@class ATXGenericFileBasedCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXBiomeSuggestedHomePageStream.h"

@interface ATXInstalledSuggestedPagesTracker : NSObject {
    ATXGenericFileBasedCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeSuggestedHomePageStream *_suggestedHomePageStream;
}




-(NSInteger)suggestedPageTypeWithIdentifier:(id)arg0 ;
-(id)_allInstalledPages;
-(id)allInstalledPages;
-(id)identifierOfSuggestedPageForModeUUID:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_serializePages:(id)arg0 ;
-(void)removePagesWithIdentifiersNotInSet:(id)arg0 ;
-(void)storePageIdentifier:(id)arg0 modeUUID:(id)arg1 forPageType:(NSInteger)arg2 ;
-(void)trackSuggestedHomePageWithAction:(NSInteger)arg0 pageType:(NSInteger)arg1 identifier:(id)arg2 ;


@end


#endif