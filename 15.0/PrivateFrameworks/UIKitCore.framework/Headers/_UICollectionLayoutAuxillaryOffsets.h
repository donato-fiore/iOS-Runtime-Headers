// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTAUXILLARYOFFSETS_H
#define _UICOLLECTIONLAYOUTAUXILLARYOFFSETS_H

@class NSMutableDictionary, NSString, NSSet;
@protocol _UICollectionLayoutAuxillaryOffsets, NSCopying;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutAuxillaryOffsets : NSObject <_UICollectionLayoutAuxillaryOffsets, NSCopying>

 {
    NSMutableDictionary *_offsets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *elementKinds;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsIndex:(NSInteger)arg0 forElementKind:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)overlapsOffsets:(id)arg0 ;
-(NSInteger)offsetForElementKind:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexesForElementKind:(id)arg0 ;
-(id)init;
-(id)offsetsByApplyingOffsets:(id)arg0 ;
-(id)offsetsByRebasingOnOffsets:(id)arg0 ;
-(struct _NSRange )rangeForElementKind:(id)arg0 ;


@end


#endif