// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISLIVEPHOTOVITALITYFILTER_H
#define ISLIVEPHOTOVITALITYFILTER_H

@protocol ISVitalitySettings;

#import <Foundation/Foundation.h>


@interface ISLivePhotoVitalityFilter : NSObject

@property (nonatomic, setter=_setShouldUpdateOutput:) BOOL _shouldUpdateOutput; // ivar: __shouldUpdateOutput
@property (nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges; // ivar: _isPerformingInputChanges
@property (copy, nonatomic) id *outputChangeHandler; // ivar: _outputChangeHandler
@property (readonly, nonatomic) NSObject<ISVitalitySettings> *settings; // ivar: _settings
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)invalidateOutput;
-(void)performInputChanges:(id)arg0 ;
-(void)updateOutput;


@end


#endif