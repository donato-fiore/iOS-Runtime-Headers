// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGKEYCURATORSUBCLUSTER_H
#define PGKEYCURATORSUBCLUSTER_H

@protocol CLSInvestigationItem;

#import <Foundation/Foundation.h>


@interface PGKeyCuratorSubcluster : NSObject

@property (readonly) NSObject<CLSInvestigationItem> *keyItem; // ivar: _keyItem
@property (readonly) CGFloat score; // ivar: _score


-(id)initWithItems:(id)arg0 keyItem:(id)arg1 score:(CGFloat)arg2 ;


@end


#endif