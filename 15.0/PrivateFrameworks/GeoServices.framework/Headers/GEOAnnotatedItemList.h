// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOANNOTATEDITEMLIST_H
#define GEOANNOTATEDITEMLIST_H

@class NSString;
@protocol GEOAnnotatedItemList, GEOPictureItemContainer, GEOTextItemContainer;

#import <Foundation/Foundation.h>

#import "GEOMapItemAttribution.h"

@interface GEOAnnotatedItemList : NSObject <GEOAnnotatedItemList>



@property (readonly, nonatomic) int annotatedItemStyle; // ivar: _annotatedItemStyle
@property (readonly, nonatomic) GEOMapItemAttribution *attribution; // ivar: _attribution
@property (readonly, nonatomic) NSObject<GEOPictureItemContainer> *pictureItemContainer; // ivar: _pictureItemContainer
@property (readonly, nonatomic) NSObject<GEOTextItemContainer> *textItemContainer; // ivar: _textItemContainer
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithAnnotatedItemList:(id)arg0 attribution:(id)arg1 ;
-(id)initWithPictureItemContainer:(id)arg0 textItemContainer:(id)arg1 title:(id)arg2 annotatedItemStyle:(int)arg3 attribution:(id)arg4 ;


@end


#endif