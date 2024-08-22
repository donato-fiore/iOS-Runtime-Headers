// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSPRONUNCIATIONSUBSTITUTION_H
#define AXSSPRONUNCIATIONSUBSTITUTION_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface AXSSPronunciationSubstitution : NSObject

@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) BOOL appliesToAllApps; // ivar: _appliesToAllApps
@property (copy, nonatomic) NSSet *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (nonatomic) BOOL ignoreCase; // ivar: _ignoreCase
@property (nonatomic) BOOL isUserSubstitution; // ivar: _isUserSubstitution
@property (copy, nonatomic) NSSet *languages; // ivar: _languages
@property (copy, nonatomic) NSString *originalString; // ivar: _originalString
@property (copy, nonatomic) NSString *phonemes; // ivar: _phonemes
@property (nonatomic) _NSRange replacementRange; // ivar: _replacementRange
@property (copy, nonatomic) NSString *replacementString; // ivar: _replacementString
@property (copy, nonatomic) NSSet *voiceIds; // ivar: _voiceIds


-(BOOL)isEqualToSubstitution:(id)arg0 ;


@end


#endif