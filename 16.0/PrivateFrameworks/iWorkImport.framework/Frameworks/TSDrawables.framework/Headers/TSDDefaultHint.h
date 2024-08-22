// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDDEFAULTHINT_H
#define TSDDEFAULTHINT_H

@class NSString;
@protocol TSDHint;

#import <Foundation/Foundation.h>


@interface TSDDefaultHint : NSObject <TSDHint>



@property (readonly, nonatomic) CGRect bounds; // ivar: mBounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger edges; // ivar: mEdges
@property (readonly, nonatomic) CGSize effectiveSize;
@property (readonly, nonatomic) NSObject<TSDHint> *firstChildHint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFirstHint;
@property (readonly, nonatomic) NSObject<TSDHint> *lastChildHint;
@property (readonly, nonatomic) CGSize maximumSize;
@property (readonly) Class superclass;


+(Class)archivedHintClass;
-(BOOL)isLastPartitionHorizontally:(BOOL)arg0 ;
-(BOOL)overlapsWithSelectionPath:(id)arg0 ;
-(id)copyForArchiving;
-(id)initWithBounds:(struct CGRect )arg0 edges:(NSUInteger)arg1 ;


@end


#endif