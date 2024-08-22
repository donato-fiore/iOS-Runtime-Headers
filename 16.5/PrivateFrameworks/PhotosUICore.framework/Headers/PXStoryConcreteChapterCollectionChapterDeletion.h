// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETECHAPTERCOLLECTIONCHAPTERDELETION_H
#define PXSTORYCONCRETECHAPTERCOLLECTIONCHAPTERDELETION_H

@protocol PXStoryChapterCollectionChapterDeletion, NSCopying;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteChapterCollectionChapterDeletion : NSObject <PXStoryChapterCollectionChapterDeletion>



@property (readonly, nonatomic) NSObject<NSCopying> *deletedChapterIdentifier; // ivar: _deletedChapterIdentifier
@property (readonly, nonatomic) NSInteger kind;


-(id)init;
-(id)initWithDeletedChapterIdentifier:(id)arg0 ;


@end


#endif