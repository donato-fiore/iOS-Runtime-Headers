// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMENTIONAUTOCOMPLETEATTRIBUTE_H
#define CKMENTIONAUTOCOMPLETEATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKMentionEntityNode.h"

@interface CKMentionAutoCompleteAttribute : NSObject

@property (retain, nonatomic) NSString *displayText; // ivar: _displayText
@property (retain, nonatomic) CKMentionEntityNode *mentionEntityNode; // ivar: _mentionEntityNode
@property (retain, nonatomic) NSString *originalText; // ivar: _originalText


-(id)initWithMentionEntityNode:(id)arg0 originalText:(id)arg1 displayText:(id)arg2 ;


@end


#endif