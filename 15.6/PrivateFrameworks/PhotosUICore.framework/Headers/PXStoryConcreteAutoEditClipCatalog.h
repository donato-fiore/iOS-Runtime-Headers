// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETEAUTOEDITCLIPCATALOG_H
#define PXSTORYCONCRETEAUTOEDITCLIPCATALOG_H

@class NSMutableDictionary, NSMutableArray;
@protocol PXStoryAutoEditClipCatalog, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteAutoEditClipCatalog : NSObject <PXStoryAutoEditClipCatalog, NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_clipIndicesByAssetUUID;
    NSMutableArray *_orderedClips;
}


@property (readonly, nonatomic) NSInteger numberOfClips;


-(NSInteger)indexOfClipForDisplayAsset:(id)arg0 ;
-(id)clipAtIndex:(NSInteger)arg0 ;
-(id)clipForDisplayAsset:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCapacity:(NSInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateClipsUsingBlock:(id)arg0 ;


@end


#endif