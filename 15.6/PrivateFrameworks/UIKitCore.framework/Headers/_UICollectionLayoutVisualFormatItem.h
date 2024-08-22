// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTVISUALFORMATITEM_H
#define _UICOLLECTIONLAYOUTVISUALFORMATITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutSize.h"

@interface _UICollectionLayoutVisualFormatItem : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSCollectionLayoutSize *size; // ivar: _size


-(id)description;
-(id)initWithName:(id)arg0 size:(id)arg1 ;


@end


#endif