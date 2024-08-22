// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGRULEMANAGER_H
#define PLACCOUNTINGRULEMANAGER_H

@class NSRegularExpression, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLAccountingRuleManager : NSObject

@property (retain, nonatomic) NSRegularExpression *regex; // ivar: _regex
@property (retain, nonatomic) NSMutableDictionary *ruleIDToRule; // ivar: _ruleIDToRule


+(id)decryptData:(id)arg0 withKey:(id)arg1 ;
+(id)firstLineWithFile:(id)arg0 ;
+(id)rulesEntryKey;
+(id)rulesPath;
+(id)sharedInstance;
+(id)storedHashDefaults;
-(id)init;
-(id)ruleForRuleID:(id)arg0 ;
-(id)ruleWithString:(id)arg0 withEntryDate:(id)arg1 ;
-(id)rulesFromFileWithForceLoad:(BOOL)arg0 ;
-(void)indexRule:(id)arg0 ;
-(void)loadRules;


@end


#endif