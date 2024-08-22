// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSDOCUMENTISSUE_H
#define AXSSDOCUMENTISSUE_H

@class NSString, NSAttributedString, NSArray;

#import <Foundation/Foundation.h>

#import "AXSSDocumentNode.h"

@interface AXSSDocumentIssue : NSObject

@property (nonatomic) BOOL autoMatchSuggestionAttributes; // ivar: _autoMatchSuggestionAttributes
@property (nonatomic) NSUInteger kind; // ivar: _kind
@property (retain, nonatomic) AXSSDocumentNode *node; // ivar: _node
@property (copy, nonatomic) NSString *note; // ivar: _note
@property (copy, nonatomic) NSAttributedString *offendingText; // ivar: _offendingText
@property (nonatomic) _NSRange range; // ivar: _range
@property (nonatomic) NSInteger severity; // ivar: _severity
@property (copy, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(id)description;
-(id)init;
-(void)_updateSuggestionStyleIfNeeded;


@end


#endif