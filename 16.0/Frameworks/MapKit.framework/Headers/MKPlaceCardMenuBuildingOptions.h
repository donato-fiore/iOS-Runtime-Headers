// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACECARDMENUBUILDINGOPTIONS_H
#define MKPLACECARDMENUBUILDINGOPTIONS_H

@class UIMenuElement, NSArray;

#import <Foundation/Foundation.h>


@interface MKPlaceCardMenuBuildingOptions : NSObject

@property (nonatomic) BOOL addMismatchedItems; // ivar: _addMismatchedItems
@property (retain, nonatomic) UIMenuElement *headerMenuElement; // ivar: _headerMenuElement
@property (readonly, copy, nonatomic) NSArray *requestedActionTypes; // ivar: _requestedActionTypes


-(id)initWithRequestedActionTypes:(id)arg0 ;


@end


#endif