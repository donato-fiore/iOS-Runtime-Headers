// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTFRAMESQUERYRESULT_H
#define _UICOLLECTIONLAYOUTFRAMESQUERYRESULT_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutItem.h"

@interface _UICollectionLayoutFramesQueryResult : NSObject <NSCopying>

 {
    BOOL _isFrameAdjustedForPinning;
    NSInteger _index;
    NSInteger _zIndex;
    NSInteger _resultKind;
    NSCollectionLayoutItem *_item;
    NSUUID *_supplementaryEnrollmentIdentifier;
    NSInteger _auxillaryKind;
    CGRect _frame;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif