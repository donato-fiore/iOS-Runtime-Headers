// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14PAGESQUICKLOOK17TPPAGELAYOUTCACHE_H
#define _TTC14PAGESQUICKLOOK17TPPAGELAYOUTCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC14PagesQuicklook17TPPageLayoutCache : NSObject {
    ? pageLayoutCache;
    ? pendingUpdates;
    ? accessQueue;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)pageLayouts;
-(id)pageLayoutsFromStartIndex:(NSUInteger)arg0 ;
-(id)pageLayoutsFromStartIndex:(NSUInteger)arg0 toEndIndex:(NSUInteger)arg1 ;
-(id)pageLayoutsInRange:(struct _NSRange )arg0 ;
-(id)pageLayoutsUpToPageIndex:(NSUInteger)arg0 ;
-(id)pageLayoutsWithPageIndex:(NSUInteger)arg0 ;
-(void)coalesce;
-(void)enqueueInsertion:(id)arg0 ;
-(void)enqueueRemoval:(id)arg0 ;


@end


#endif