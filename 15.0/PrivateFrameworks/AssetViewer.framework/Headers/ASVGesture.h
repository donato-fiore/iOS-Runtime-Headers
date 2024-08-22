// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVGESTURE_H
#define ASVGESTURE_H

@protocol ASVGestureDataSource;

#import <Foundation/Foundation.h>


@interface ASVGesture : NSObject {
    ? _initialAssetLocationOnScreen;
    ? _latestAssetLocationOnScreen;
}


@property (weak, nonatomic) NSObject<ASVGestureDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL firstTouchWasOnAsset; // ivar: _firstTouchWasOnAsset
@property ? initialAssetLocationOnScreen;
@property ? latestAssetLocationOnScreen;


-(id)initWithDataSource:(id)arg0 ;


@end


#endif