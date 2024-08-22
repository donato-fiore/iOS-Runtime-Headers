// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSDOCUMENTTEXTRULESETMANAGER_H
#define AXSSDOCUMENTTEXTRULESETMANAGER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface AXSSDocumentTextRulesetManager : NSObject

@property (retain, nonatomic) NSMutableArray *_rulesets; // ivar: __rulesets
@property (readonly, copy, nonatomic) NSArray *rulesets;


+(id)sharedManager;
-(id)description;
-(id)init;
-(void)_loadCustomRulesets;
-(void)loadRulesets;


@end


#endif