// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGKEYCURATORCLUSTER_H
#define PGKEYCURATORCLUSTER_H

@class NSArray;
@protocol CLSInvestigationItem;

#import <Foundation/Foundation.h>


@interface PGKeyCuratorCluster : NSObject

@property (readonly) NSObject<CLSInvestigationItem> *keyItem; // ivar: _keyItem
@property (readonly) CGFloat score; // ivar: _score
@property (readonly) NSArray *subclusters; // ivar: _subclusters


-(id)initWithSubclusters:(id)arg0 keyItem:(id)arg1 score:(CGFloat)arg2 ;


@end


#endif