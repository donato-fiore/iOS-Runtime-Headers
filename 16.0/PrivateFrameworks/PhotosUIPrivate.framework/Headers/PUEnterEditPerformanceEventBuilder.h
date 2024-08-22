// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUENTEREDITPERFORMANCEEVENTBUILDER_H
#define PUENTEREDITPERFORMANCEEVENTBUILDER_H

@protocol PUEditableAsset;

#import <Foundation/Foundation.h>


@interface PUEnterEditPerformanceEventBuilder : NSObject

@property (retain, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (nonatomic) CGFloat autoCalcDuration; // ivar: _autoCalcDuration
@property (nonatomic, getter=isEditingWithRaw) BOOL editingWithRaw; // ivar: _editingWithRaw
@property (nonatomic) CGFloat enterEditDuration; // ivar: _enterEditDuration
@property (nonatomic, getter=isFirstSinceBoot) BOOL firstSinceBoot; // ivar: _firstSinceBoot
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch; // ivar: _firstSinceLaunch
@property (nonatomic) CGFloat resourceCheckingDuration; // ivar: _resourceCheckingDuration
@property (nonatomic) CGFloat resourceDownloadDuration; // ivar: _resourceDownloadDuration
@property (nonatomic) CGFloat resourceLoadingDuration; // ivar: _resourceLoadingDuration


-(id)buildEvent;


@end


#endif