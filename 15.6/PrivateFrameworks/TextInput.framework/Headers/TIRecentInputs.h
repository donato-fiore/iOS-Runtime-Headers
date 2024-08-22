// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIRECENTINPUTS_H
#define TIRECENTINPUTS_H

@class NSString;


#import "TILexicon.h"

@interface TIRecentInputs : TILexicon

@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (nonatomic) BOOL needsSync; // ivar: _needsSync


+(BOOL)identifierIsSystemIdentifier:(id)arg0 ;
+(BOOL)validateInputFormat:(id)arg0 forIdentifier:(id)arg1 ;
+(id)_lexiconPathForLocalIdentifier:(id)arg0 ;
+(id)_sanitizeRecentInputString:(id)arg0 ;
+(id)recentInputAtPath:(id)arg0 ;
+(id)recentInputForIdentifier:(id)arg0 ;
+(void)clearRecentInputForIdentifier:(id)arg0 ;
+(void)recentInputForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)removeInput:(id)arg0 forSystemIdentifier:(id)arg1 ;
+(void)requestLexiconForRecentInputIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg0 ;
+(void)storeInput:(id)arg0 forLocalIdentifier:(id)arg1 ;
+(void)storeInput:(id)arg0 forSystemIdentifier:(id)arg1 ;
+(void)storeInput:(id)arg0 forSystemIdentifier:(id)arg1 atPath:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)lexiconByRemovingEntry:(id)arg0 ;
-(id)lexiconWithAdditionalEntry:(id)arg0 maximumSize:(NSInteger)arg1 ;
-(void)storeIfNecessary;


@end


#endif