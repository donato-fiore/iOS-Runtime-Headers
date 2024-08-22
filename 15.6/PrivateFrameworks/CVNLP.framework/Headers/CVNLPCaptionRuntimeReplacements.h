// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCAPTIONRUNTIMEREPLACEMENTS_H
#define CVNLPCAPTIONRUNTIMEREPLACEMENTS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CVNLPCaptionRuntimeReplacements : NSObject

@property (readonly, nonatomic) NSNumber *genderOption; // ivar: _genderOption
@property (readonly, nonatomic) NSString *replacementKey; // ivar: _replacementKey
@property (readonly, nonatomic) CGFloat replacementProb; // ivar: _replacementProb
@property (readonly, nonatomic) NSString *replacementValue; // ivar: _replacementValue


-(id)initWithKey:(id)arg0 value:(id)arg1 prob:(CGFloat)arg2 genderOption:(id)arg3 ;


@end


#endif