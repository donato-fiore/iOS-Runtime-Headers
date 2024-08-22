// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUEXITEDITPERFORMANCEEVENTBUILDER_H
#define PUEXITEDITPERFORMANCEEVENTBUILDER_H

@class PICompositionController;
@protocol PUEditableAsset;

#import <Foundation/Foundation.h>


@interface PUExitEditPerformanceEventBuilder : NSObject

@property (retain, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (nonatomic, getter=isEditingWithRaw) BOOL editingWithRaw; // ivar: _editingWithRaw
@property (nonatomic) CGFloat exitEditDuration; // ivar: _exitEditDuration
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch; // ivar: _firstSinceLaunch
@property (nonatomic) NSInteger sessionEndReason; // ivar: _sessionEndReason


-(id)buildEvent;


@end


#endif