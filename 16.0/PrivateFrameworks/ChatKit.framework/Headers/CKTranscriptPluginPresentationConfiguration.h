// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTPLUGINPRESENTATIONCONFIGURATION_H
#define CKTRANSCRIPTPLUGINPRESENTATIONCONFIGURATION_H

@class UIView;

#import <Foundation/Foundation.h>


@interface CKTranscriptPluginPresentationConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections
@property (readonly, nonatomic) BOOL shouldDisableSnapshotView; // ivar: _shouldDisableSnapshotView
@property (readonly, weak, nonatomic) UIView *sourceView; // ivar: _sourceView


-(id)initWithSourceView:(id)arg0 permittedArrowDirections:(NSUInteger)arg1 shouldDisableSnapshotView:(BOOL)arg2 ;


@end


#endif