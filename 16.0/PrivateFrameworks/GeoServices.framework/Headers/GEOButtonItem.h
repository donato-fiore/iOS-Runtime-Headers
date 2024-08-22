// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOBUTTONITEM_H
#define GEOBUTTONITEM_H


#import <Foundation/Foundation.h>

#import "GEOPDButtonItem.h"

@interface GEOButtonItem : NSObject {
    GEOPDButtonItem *_buttonItem;
}


@property (readonly, nonatomic) int buttonType;


+(id)buttonItemsFromPDButtonItems:(id)arg0 ;
-(id)initWithButtonItem:(id)arg0 ;


@end


#endif