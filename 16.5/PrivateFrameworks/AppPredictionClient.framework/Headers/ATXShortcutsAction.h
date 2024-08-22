// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSHORTCUTSACTION_H
#define ATXSHORTCUTSACTION_H

@class WFContextualAction, NSString, CSSearchableItem;
@protocol NSSecureCoding, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>

#import "ATXActionCriteria.h"

@interface ATXShortcutsAction : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol>

 {
    ATXActionCriteria *_criteria;
}


@property (readonly, nonatomic) WFContextualAction *contextualAction; // ivar: _contextualAction
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAction:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextualAction:(id)arg0 criteria:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif