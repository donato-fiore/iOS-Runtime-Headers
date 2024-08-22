// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETWRITERINPUTGROUP_H
#define AVASSETWRITERINPUTGROUP_H

@class NSArray;


#import "AVMediaSelectionGroup.h"
#import "AVAssetWriterInputGroupInternal.h"
#import "AVAssetWriterInput.h"

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {
    AVAssetWriterInputGroupInternal *_internal;
}


@property (readonly, nonatomic) AVAssetWriterInput *defaultInput;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *provisionalInputs;


+(id)assetWriterInputGroupWithInputs:(id)arg0 defaultInput:(id)arg1 ;
+(id)assetWriterInputGroupWithInputs:(id)arg0 provisionalInputs:(id)arg1 defaultInput:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInputs:(id)arg0 defaultInput:(id)arg1 ;
-(id)initWithInputs:(id)arg0 provisionalInputs:(id)arg1 defaultInput:(id)arg2 ;
-(id)mediaSelectionOptionWithPropertyList:(id)arg0 ;
-(id)options;
-(void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif