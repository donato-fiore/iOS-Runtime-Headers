// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONDECLARATIVENETREQUESTRULESET_H
#define WBSWEBEXTENSIONDECLARATIVENETREQUESTRULESET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionDeclarativeNetRequestRuleset : NSObject

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSString *jsonPath; // ivar: _jsonPath
@property (readonly, copy, nonatomic) NSString *rulesetID; // ivar: _rulesetID


-(id)description;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif