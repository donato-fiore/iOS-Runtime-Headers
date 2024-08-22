// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESTOROBOTSCONFIG_H
#define SGQUICKRESPONSESTOROBOTSCONFIG_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesToRobotsConfig : NSObject

@property (readonly, nonatomic) float capsWordsRatioMax; // ivar: _capsWordsRatioMax
@property (readonly, nonatomic) BOOL enableFeature; // ivar: _enableFeature
@property (readonly, nonatomic) NSUInteger generalContextLeft; // ivar: _generalContextLeft
@property (readonly, nonatomic) NSUInteger generalContextRight; // ivar: _generalContextRight
@property (readonly, nonatomic) NSSet *generalContextWords; // ivar: _generalContextWords
@property (readonly, nonatomic) BOOL insignificantSender; // ivar: _insignificantSender
@property (readonly, nonatomic) NSUInteger leftContext; // ivar: _leftContext
@property (readonly, nonatomic) BOOL relaxContext; // ivar: _relaxContext
@property (readonly, nonatomic) NSUInteger rightContext; // ivar: _rightContext
@property (readonly, nonatomic) NSDictionary *supportedKeysAndContext; // ivar: _supportedKeysAndContext
@property (readonly, nonatomic) NSUInteger triggerContext; // ivar: _triggerContext
@property (readonly, nonatomic) NSSet *triggerWords; // ivar: _triggerWords
@property (readonly, nonatomic) BOOL useGeneralContext; // ivar: _useGeneralContext


+(id)sharedInstance;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif