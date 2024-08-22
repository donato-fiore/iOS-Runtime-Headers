// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITIMAGEVALUES_H
#define PUPHOTOEDITIMAGEVALUES_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PUPhotoEditImageValues : NSObject

@property (copy) NSDictionary *apertureValues; // ivar: _apertureValues
@property (copy) NSDictionary *autoCropValues; // ivar: _autoCropValues
@property (copy) NSDictionary *autoPerspectiveValues; // ivar: _autoPerspectiveValues
@property (getter=isComplete) BOOL complete; // ivar: _complete
@property (copy) NSDictionary *overcaptureSmartToneStatistics; // ivar: _overcaptureSmartToneStatistics
@property (copy) NSDictionary *portraitValues; // ivar: _portraitValues
@property (copy) NSDictionary *primarySmartToneStatistics; // ivar: _primarySmartToneStatistics
@property CGFloat smartColorAutoSuggestion; // ivar: _smartColorAutoSuggestion
@property (copy) NSDictionary *smartColorStatistics; // ivar: _smartColorStatistics
@property CGFloat smartToneAutoSuggestion; // ivar: _smartToneAutoSuggestion
@property (copy) NSDictionary *smartToneStatistics; // ivar: _smartToneStatistics




@end


#endif