// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCONCRETECHAPTERCOLLECTIONCHAPTERMODIFICATION_H
#define PXSTORYCONCRETECHAPTERCOLLECTIONCHAPTERMODIFICATION_H

@protocol PXStoryChapterCollectionChapterModification, NSCopying;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteChapterCollectionChapterModification : NSObject <PXStoryChapterCollectionChapterModification>



@property (readonly, nonatomic) id *chapterChangeRequest; // ivar: _chapterChangeRequest
@property (readonly, nonatomic) NSObject<NSCopying> *editedChapterIdentifier; // ivar: _editedChapterIdentifier
@property (readonly, nonatomic) NSInteger kind;


-(id)init;
-(id)initWithEditedChapterIdentifier:(id)arg0 chapterChangeRequest:(id)arg1 ;


@end


#endif