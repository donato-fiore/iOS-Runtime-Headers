// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOMMANDITEMINSERTION_H
#define _UICOMMANDITEMINSERTION_H

@class UICommandChange, NSArray;


#import "_UICommandIdentifier.h"

@interface _UICommandItemInsertion : UICommandChange

@property (readonly, nonatomic) _UICommandIdentifier *anchor;
@property (readonly, nonatomic) NSArray *fallbacks; // ivar: _fallbacks
@property (readonly, nonatomic) NSArray *insertsAfter; // ivar: _insertsAfter
@property (readonly, nonatomic) NSArray *insertsBefore; // ivar: _insertsBefore


+(BOOL)supportsSecureCoding;
+(id)insertionWithAnchor:(id)arg0 fallbacks:(id)arg1 insertsBefore:(id)arg2 insertsAfter:(id)arg3 ;
// -(BOOL)acceptBoolItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(id)initWithAnchor:(id)arg0 fallbacks:(id)arg1 insertsBefore:(id)arg2 insertsAfter:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
// -(void)acceptItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif