// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWVERIFIER_H
#define _UICOLLECTIONVIEWVERIFIER_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"

@interface _UICollectionViewVerifier : NSObject {
    UICollectionView *_collectionView;
    NSTimer *_timer;
}


@property (nonatomic) BOOL enabled; // ivar: _enabled


-(void)dealloc;
-(void)prefsChanged:(id)arg0 ;


@end


#endif