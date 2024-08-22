// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMMUNICATIONFILTERITEMCACHE_H
#define COMMUNICATIONFILTERITEMCACHE_H


#import <Foundation/Foundation.h>

#import "CommunicationFilterItem.h"

@interface CommunicationFilterItemCache : NSObject {
    CommunicationFilterItem *_filterItem;
}


@property (nonatomic) NSInteger isInList; // ivar: _isInList


-(BOOL)matchesItem:(id)arg0 ;
-(id)initWithFilterItem:(id)arg0 isInList:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif