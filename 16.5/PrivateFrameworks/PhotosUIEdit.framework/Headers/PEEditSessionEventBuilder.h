// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEEDITSESSIONEVENTBUILDER_H
#define PEEDITSESSIONEVENTBUILDER_H

@class NSString, PICompositionController, NUComposition;
@protocol PEAsset;

#import <Foundation/Foundation.h>


@interface PEEditSessionEventBuilder : NSObject

@property (retain, nonatomic) NSString *adjustmentIdentifierAndVersion; // ivar: _adjustmentIdentifierAndVersion
@property (retain, nonatomic) NSObject<PEAsset> *asset; // ivar: _asset
@property (nonatomic) CGFloat autoCalcDuration; // ivar: _autoCalcDuration
@property (copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (nonatomic) CGFloat editSessionDuration; // ivar: _editSessionDuration
@property (nonatomic) CGFloat enterEditDuration; // ivar: _enterEditDuration
@property (nonatomic) CGFloat exitEditDuration; // ivar: _exitEditDuration
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch; // ivar: _firstSinceLaunch
@property (copy, nonatomic) NUComposition *initialComposition; // ivar: _initialComposition
@property (nonatomic) CGFloat resourceCheckingDuration; // ivar: _resourceCheckingDuration
@property (nonatomic) CGFloat resourceDownloadDuration; // ivar: _resourceDownloadDuration
@property (nonatomic) CGFloat resourceLoadingDuration; // ivar: _resourceLoadingDuration
@property (nonatomic) NSInteger sessionEndReason; // ivar: _sessionEndReason


+(id)allowedAdjustmentIdentifiers;
-(BOOL)shouldReportAdjustmentIdentifierString:(id)arg0 ;
-(id)buildEvent;


@end


#endif