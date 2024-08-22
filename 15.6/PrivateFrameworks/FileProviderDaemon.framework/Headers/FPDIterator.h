// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDITERATOR_H
#define FPDITERATOR_H

@class NSError;

#import <Foundation/Foundation.h>


@interface FPDIterator : NSObject

@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger numFoldersPopped;
@property (nonatomic) BOOL shouldDecorateItems; // ivar: _shouldDecorateItems
@property (nonatomic) BOOL skipMaterializedTreeTraversal; // ivar: _skipMaterializedTreeTraversal


+(id)hybridIteratorForItem:(id)arg0 provider:(id)arg1 ;
+(id)iteratorForLocator:(id)arg0 manager:(id)arg1 ;
+(id)iteratorForLocator:(id)arg0 provider:(id)arg1 ;
+(id)iteratorForLocator:(id)arg0 wantsDisk:(BOOL)arg1 provider:(id)arg2 ;
-(id)nextItem;
-(id)nextWithError:(*id)arg0 ;


@end


#endif