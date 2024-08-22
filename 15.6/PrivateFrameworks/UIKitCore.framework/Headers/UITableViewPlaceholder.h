// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWPLACEHOLDER_H
#define UITABLEVIEWPLACEHOLDER_H

@class NSIndexPath, NSString;

#import <Foundation/Foundation.h>


@interface UITableViewPlaceholder : NSObject

@property (copy, nonatomic) id *cellUpdateHandler; // ivar: _cellUpdateHandler
@property (retain, nonatomic) NSIndexPath *insertionIndexPath; // ivar: _insertionIndexPath
@property (retain, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight


-(id)initWithInsertionIndexPath:(id)arg0 reuseIdentifier:(id)arg1 rowHeight:(CGFloat)arg2 ;


@end


#endif