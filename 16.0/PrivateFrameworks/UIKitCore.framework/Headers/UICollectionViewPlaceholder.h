// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWPLACEHOLDER_H
#define UICOLLECTIONVIEWPLACEHOLDER_H

@class NSString, NSIndexPath;

#import <Foundation/Foundation.h>


@interface UICollectionViewPlaceholder : NSObject

@property (copy, nonatomic) NSString *cellReuseIdentifier; // ivar: _cellReuseIdentifier
@property (copy, nonatomic) id *cellUpdateHandler; // ivar: _cellUpdateHandler
@property (retain, nonatomic) NSIndexPath *insertionIndexPath; // ivar: _insertionIndexPath


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInsertionIndexPath:(id)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif