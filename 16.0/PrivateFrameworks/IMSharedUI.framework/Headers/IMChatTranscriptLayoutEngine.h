// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCHATTRANSCRIPTLAYOUTENGINE_H
#define IMCHATTRANSCRIPTLAYOUTENGINE_H

@class NSMutableArray, NSArray;
@protocol IMChatTranscriptLayoutEngineDataSource;

#import <Foundation/Foundation.h>

#import "IMChatTranscriptLayoutSpecification.h"

@interface IMChatTranscriptLayoutEngine : NSObject {
    NSMutableArray *_cachedDrawables;
}


@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (weak, nonatomic) NSObject<IMChatTranscriptLayoutEngineDataSource> *dataSource; // ivar: _dataSource
@property (copy, nonatomic) NSArray *layoutAttributes; // ivar: _layoutAttributes
@property (retain, nonatomic) IMChatTranscriptLayoutSpecification *layoutSpecification; // ivar: _layoutSpecification


-(CGFloat)_spaceForVerticalSpaceDescriptor:(NSInteger)arg0 ;
-(NSUInteger)_numberOfTranscriptItems;
-(id)_cachedDrawableAtIndexOrNil:(NSUInteger)arg0 ;
-(id)_cachedDrawableForTranscriptItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_makeDrawableForTranscriptItem:(id)arg0 ;
-(id)drawableAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(void)_buildLayoutAttributesIfNeeded;
-(void)_invalidateCachedItemData;
-(void)_updateContentSize;
-(void)_updateFrames;
-(void)invalidateLayout;
-(void)prepareLayout;
-(void)reloadData;
-(void)removeItemsAtIndexPaths:(id)arg0 insertItemsAtIndexPaths:(id)arg1 ;


@end


#endif