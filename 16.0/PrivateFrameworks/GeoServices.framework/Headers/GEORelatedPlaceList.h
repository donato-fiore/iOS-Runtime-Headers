// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORELATEDPLACELIST_H
#define GEORELATEDPLACELIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEORelatedPlaceList : NSObject {
    NSArray *_placeTemplates;
    int _type;
}


@property (readonly, nonatomic) BOOL hasInitialData; // ivar: _hasInitialData
@property (readonly, nonatomic) NSArray *mapIdentifiers;
@property (readonly, nonatomic) NSUInteger numberOfInlineItems; // ivar: _numberOfInlineItems
@property (readonly, nonatomic) NSArray *placeTemplates;
@property (readonly, nonatomic) int type;


-(id)initWithRelatedPlace:(id)arg0 ;
-(id)initWithTemplatePlace:(id)arg0 attributedMap:(id)arg1 ;
-(id)initWithTemplates:(id)arg0 type:(int)arg1 hasInitialData:(BOOL)arg2 numberOfInlineItem:(NSUInteger)arg3 ;


@end


#endif