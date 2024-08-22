// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPRESULTCANDIDATEENTITY_H
#define UPRESULTCANDIDATEENTITY_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "UPResultLeafNode.h"
#import "UPResultStructuredDataNode.h"

@interface UPResultCandidateEntity : NSObject

@property (readonly) NSNumber *groupId; // ivar: _groupId
@property (readonly) NSString *higherLevelChildLabel;
@property (readonly) NSString *higherLevelParentLabel;
@property (readonly) BOOL isHigherLevelEntity;
@property (readonly) NSString *label; // ivar: _label
@property (readonly) UPResultLeafNode *leafNodeRepresentation;
@property (readonly) _NSRange range; // ivar: _range
@property (readonly) NSString *semanticValue; // ivar: _semanticValue
@property (readonly) UPResultStructuredDataNode *structuredData; // ivar: _structuredData
@property (readonly) NSString *text; // ivar: _text


-(id)_indexedLabelRepresentation;
-(id)annotatedEntityFragmentString;
-(id)initWithRange:(struct _NSRange )arg0 label:(id)arg1 text:(id)arg2 groupId:(id)arg3 semanticValue:(id)arg4 structuredData:(id)arg5 ;


@end


#endif