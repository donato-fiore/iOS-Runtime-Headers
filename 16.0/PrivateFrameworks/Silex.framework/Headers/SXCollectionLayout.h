// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOLLECTIONLAYOUT_H
#define SXCOLLECTIONLAYOUT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SXCollectionLayout : NSObject

@property (retain, nonatomic) NSArray *rowsLayouts; // ivar: _rowsLayouts
@property (nonatomic) CGFloat spaceBetweenRows; // ivar: _spaceBetweenRows


-(id)description;


@end


#endif