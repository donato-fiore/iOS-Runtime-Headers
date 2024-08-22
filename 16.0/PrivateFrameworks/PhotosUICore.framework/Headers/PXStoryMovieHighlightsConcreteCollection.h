// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMOVIEHIGHLIGHTSCONCRETECOLLECTION_H
#define PXSTORYMOVIEHIGHLIGHTSCONCRETECOLLECTION_H

@class NSMutableDictionary, NSString;
@protocol PXStoryMovieHighlightsCollection, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PXStoryMovieHighlightsConcreteCollection : NSObject <PXStoryMovieHighlightsCollection, NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_highlightsByAssetId;
}


@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSString *diagnosticDescription;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)movieHighlightsForDisplayAsset:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif