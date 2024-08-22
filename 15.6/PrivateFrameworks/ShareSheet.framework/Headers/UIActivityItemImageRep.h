// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACTIVITYITEMIMAGEREP_H
#define UIACTIVITYITEMIMAGEREP_H


#import <Foundation/Foundation.h>


@interface UIActivityItemImageRep : NSObject

@property (retain, nonatomic) id *asset; // ivar: _asset
@property (copy, nonatomic) id *dataProvider; // ivar: _dataProvider
@property (copy, nonatomic) id *thumbnailProvider; // ivar: _thumbnailProvider


// +(id)activityItemImageRepWithAsset:(id)arg0 thumbnailProvider:(id)arg1 dataProvider:(unk)arg2  ;
-(id)data;
-(id)thumbnail;


@end


#endif