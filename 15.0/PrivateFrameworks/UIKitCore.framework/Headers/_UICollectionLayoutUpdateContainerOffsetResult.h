// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTUPDATECONTAINEROFFSETRESULT_H
#define _UICOLLECTIONLAYOUTUPDATECONTAINEROFFSETRESULT_H

@class NSMutableDictionary, NSString, NSSet;
@protocol _UICollectionLayoutUpdateContainerOffsetResult;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject <_UICollectionLayoutUpdateContainerOffsetResult>

 {
    NSMutableDictionary *_invalidatedSupplementaryIndexesDict;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
@property (readonly) Class superclass;


-(id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg0 ;
-(id)init;
-(void)addInvalidatedSupplementaryForKind:(id)arg0 indexPath:(id)arg1 ;


@end


#endif