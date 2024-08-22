// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVUNREACHABLEASSETINSPECTORLOADER_H
#define AVUNREACHABLEASSETINSPECTORLOADER_H

@class NSDictionary;


#import "AVAssetInspectorLoader.h"

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader {
    int _figError;
    NSDictionary *_figErrorUserInfo;
    BOOL _statusOfValueForKeyReturnsLoaded;
}




-(Class)_classForTrackInspectors;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)initForUnitTests;
-(id)initWithFigError:(int)arg0 userInfo:(id)arg1 ;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif