// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWINDEXENTRY_H
#define _UITABLEVIEWINDEXENTRY_H


#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UITableViewIndexEntry : NSObject

@property (nonatomic) CGPoint baselinePoint; // ivar: _baselinePoint
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) id *line; // ivar: _line
@property (nonatomic) CGRect typeBounds; // ivar: _typeBounds


-(id)description;


@end


#endif