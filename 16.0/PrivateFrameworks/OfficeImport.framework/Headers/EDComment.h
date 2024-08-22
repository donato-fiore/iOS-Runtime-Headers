// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDCOMMENT_H
#define EDCOMMENT_H


#import <Foundation/Foundation.h>

#import "EDString.h"

@interface EDComment : NSObject

@property (retain, nonatomic) EDString *author; // ivar: _author
@property (nonatomic) int columnIndex; // ivar: _columnIndex
@property (nonatomic) int rowIndex; // ivar: _rowIndex
@property (nonatomic) BOOL visible; // ivar: _visible


-(id)description;


@end


#endif