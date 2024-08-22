// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSDOCUMENTTEXTRULESET_H
#define AXSSDOCUMENTTEXTRULESET_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AXSSDocumentTextRuleset : NSObject

@property (retain, nonatomic) NSMutableArray *_rules; // ivar: __rules
@property (readonly, copy, nonatomic) NSArray *allRules;
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)init;
-(id)rulesForGranularity:(NSInteger)arg0 ;
-(void)addRule:(id)arg0 ;


@end


#endif