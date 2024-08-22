// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOMMANDMENUINSERTION_H
#define _UICOMMANDMENUINSERTION_H

@class UICommandChange, NSString, NSArray;



@interface _UICommandMenuInsertion : UICommandChange

@property (readonly, nonatomic) NSString *anchor;
@property (readonly, nonatomic) NSArray *fallbacks; // ivar: _fallbacks
@property (readonly, nonatomic) NSArray *insertsAfter; // ivar: _insertsAfter
@property (readonly, nonatomic) NSArray *insertsAtEnd; // ivar: _insertsAtEnd
@property (readonly, nonatomic) NSArray *insertsAtStart; // ivar: _insertsAtStart
@property (readonly, nonatomic) NSArray *insertsBefore; // ivar: _insertsBefore


+(BOOL)supportsSecureCoding;
+(id)insertionWithAnchor:(id)arg0 fallbacks:(id)arg1 insertsAtStart:(id)arg2 insertsAtEnd:(id)arg3 insertsBefore:(id)arg4 insertsAfter:(id)arg5 ;
// -(BOOL)acceptBoolItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(id)initWithAnchor:(id)arg0 fallbacks:(id)arg1 insertsAtStart:(id)arg2 insertsAtEnd:(id)arg3 insertsBefore:(id)arg4 insertsAfter:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
// -(void)acceptItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif