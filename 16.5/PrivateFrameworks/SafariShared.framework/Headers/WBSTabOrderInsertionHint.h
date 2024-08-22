// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTABORDERINSERTIONHINT_H
#define WBSTABORDERINSERTIONHINT_H

@protocol WBSOrderedTab;

#import <Foundation/Foundation.h>


@interface WBSTabOrderInsertionHint : NSObject

@property (readonly, nonatomic) NSUInteger insertionIndex; // ivar: _insertionIndex
@property (readonly, nonatomic) NSUInteger relationType; // ivar: _relationType
@property (readonly, nonatomic) NSObject<WBSOrderedTab> *tabToInsertAfter; // ivar: _tabToInsertAfter


-(id)initWithTabToInsertAfter:(id)arg0 insertionIndex:(NSUInteger)arg1 relation:(NSUInteger)arg2 ;
-(id)initWithTabToInsertAfter:(id)arg0 relation:(NSUInteger)arg1 ;


@end


#endif