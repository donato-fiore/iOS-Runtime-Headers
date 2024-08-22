// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKMATCHERPREDICATE_H
#define FBKMATCHERPREDICATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FBKFileMatcher.h"
#import "FBKFilePredicate.h"

@interface FBKMatcherPredicate : NSObject

@property (nonatomic, readonly) NSString *deBundleIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) FBKFileMatcher *fileMatcher; // ivar: _fileMatcher
@property (retain, nonatomic) FBKFilePredicate *filePredicate; // ivar: _filePredicate
@property (nonatomic, readonly) BOOL hasCachedLocalizedDataFromExtension;
@property (nonatomic, readonly) BOOL hasRegularExpression;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *hashingKey;
@property (nonatomic) BOOL isAdditional; // ivar: _isAdditional
@property (nonatomic, readonly) BOOL isConfiguredWithDEBundleIdentifier;
@property (nonatomic, readonly) NSString *localizedDataCollectedExplanation;
@property (nonatomic, readonly) NSString *localizedDataCollectedSummary;
@property (readonly, nonatomic) NSString *localizedWhenItWillGather;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) BOOL requiresRemote;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) BOOL shouldAutoGather;


+(id)shortDateFormatter;
+(id)shortestDateFormatter;
-(BOOL)collectsSameDiagnosticsAsOtherMatcher:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithFileMatcher:(id)arg0 filePredicate:(id)arg1 ;


@end


#endif