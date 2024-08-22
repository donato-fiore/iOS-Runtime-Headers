// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESOLVEDITEM_H
#define GEORESOLVEDITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDResolvedItem.h"

@interface GEOResolvedItem : NSObject {
    GEOPDResolvedItem *_resolvedItem;
}


@property (readonly, nonatomic) NSString *extractedTerm;
@property (readonly, nonatomic) BOOL hasResultIndex;
@property (readonly, nonatomic) int itemType;
@property (readonly, nonatomic) NSUInteger resultIndex;


-(id)initWithAutocompleteResolvedItem:(id)arg0 ;
-(id)initWithResolvedItem:(id)arg0 ;


@end


#endif