// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTKEYWORDDETECTORCONTEXT_H
#define VTKEYWORDDETECTORCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VTKeywordDetectorContext : NSObject

@property (readonly, nonatomic) NSString *assetPath; // ivar: _assetPath
@property (readonly, nonatomic) NSUInteger audioSourceOption; // ivar: _audioSourceOption
@property (readonly, nonatomic) NSString *categoryKey; // ivar: _categoryKey
@property (readonly, nonatomic) BOOL isMultiPhraseVTEnabled; // ivar: _isMultiPhraseVTEnabled
@property (readonly, nonatomic) NSString *locale; // ivar: _locale


-(id)initWithVTContext:(id)arg0 error:(*id)arg1 ;


@end


#endif