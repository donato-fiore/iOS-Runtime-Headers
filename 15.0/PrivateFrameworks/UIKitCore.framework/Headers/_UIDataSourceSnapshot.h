// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATASOURCESNAPSHOT_H
#define _UIDATASOURCESNAPSHOT_H

@class NSString;
@protocol _UIDataSourceSnapshot;

#import <Foundation/Foundation.h>

#import "_UIDataSourceSnapshotter.h"

@interface _UIDataSourceSnapshot : NSObject <_UIDataSourceSnapshot>

 {
    _UIDataSourceSnapshotter *_snapshotter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)globalIndexForIndexPath:(id)arg0 ;
-(NSInteger)numberOfItems;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)sectionForGlobalIndex:(NSInteger)arg0 ;
-(id)indexPathForGlobalIndex:(NSInteger)arg0 ;
-(id)initWithDataSourceSnapshotter:(id)arg0 ;
-(struct _NSRange )rangeForSection:(NSInteger)arg0 ;


@end


#endif