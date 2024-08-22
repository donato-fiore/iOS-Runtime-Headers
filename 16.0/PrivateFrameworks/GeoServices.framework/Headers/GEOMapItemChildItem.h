// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPITEMCHILDITEM_H
#define GEOMAPITEMCHILDITEM_H


#import <Foundation/Foundation.h>

#import "GEOMapItemChildAction.h"
#import "GEOMapItemChildPlace.h"
#import "GEOPublisherResult.h"

@interface GEOMapItemChildItem : NSObject

@property (retain, nonatomic) GEOMapItemChildAction *childItemAction; // ivar: _childItemAction
@property (retain, nonatomic) GEOMapItemChildPlace *childItemPlace; // ivar: _childItemPlace
@property (nonatomic) NSInteger childItemType; // ivar: _childItemType
@property (readonly, nonatomic) GEOPublisherResult *publisherResult; // ivar: _publisherResult


-(id)initWithChildItem:(id)arg0 ;
-(id)initWithChildPlace:(id)arg0 ;
-(id)initWithPublisherResult:(id)arg0 ;


@end


#endif