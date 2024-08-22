// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWFOCUSEDITEMSTATE_H
#define _UICOLLECTIONVIEWFOCUSEDITEMSTATE_H

@class NSIndexPath, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UICollectionReusableView.h"

@interface _UICollectionViewFocusedItemState : NSObject <NSCopying>

 {
    UICollectionReusableView *_reusableView;
    NSIndexPath *_indexPath;
    NSString *_elementKind;
    NSUInteger _viewType;
}




+(id)stateWithReusableView:(id)arg0 indexPath:(id)arg1 elementKind:(id)arg2 viewType:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithReusableView:(id)arg0 indexPath:(id)arg1 elementKind:(id)arg2 viewType:(NSUInteger)arg3 ;


@end


#endif