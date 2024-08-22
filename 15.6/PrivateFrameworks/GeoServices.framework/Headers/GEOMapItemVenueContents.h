// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPITEMVENUECONTENTS_H
#define GEOMAPITEMVENUECONTENTS_H

@class NSString, NSArray;
@protocol GEOMapItemVenueContents;

#import <Foundation/Foundation.h>


@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithItemList:(id)arg0 ;
-(id)initWithTitle:(id)arg0 items:(id)arg1 ;


@end


#endif