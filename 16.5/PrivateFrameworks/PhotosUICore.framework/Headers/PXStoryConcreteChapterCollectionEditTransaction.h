// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETECHAPTERCOLLECTIONEDITTRANSACTION_H
#define PXSTORYCONCRETECHAPTERCOLLECTIONEDITTRANSACTION_H

@class NSArray;
@protocol PXStoryChapterCollectionEditTransaction, PXStoryChapterCollection;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteChapterCollectionEditTransaction : NSObject <PXStoryChapterCollectionEditTransaction>



@property (readonly, nonatomic) NSArray *edits; // ivar: _edits
@property (readonly, nonatomic) NSObject<PXStoryChapterCollection> *originalChapterCollection; // ivar: _originalChapterCollection


-(id)init;
-(id)initWithOriginalChapterCollection:(id)arg0 edits:(id)arg1 ;


@end


#endif