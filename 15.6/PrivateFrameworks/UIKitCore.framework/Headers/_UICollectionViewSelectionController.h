// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWSELECTIONCONTROLLER_H
#define _UICOLLECTIONVIEWSELECTIONCONTROLLER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _UICollectionViewSelectionController : NSObject {
    NSMutableSet *_selectedIndexPaths;
    NSMutableSet *_highlightedIndexPaths;
    NSMutableSet *_nonvisibleTrackedSelectedIdentifiers;
    BOOL _allowsMultipleSelection;
}




-(id)init;


@end


#endif