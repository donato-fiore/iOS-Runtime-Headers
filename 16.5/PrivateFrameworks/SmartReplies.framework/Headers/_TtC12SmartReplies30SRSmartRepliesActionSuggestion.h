// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES30SRSMARTREPLIESACTIONSUGGESTION_H
#define _TTC12SMARTREPLIES30SRSMARTREPLIESACTIONSUGGESTION_H

@class TtC12SmartReplies24SRSmartRepliesSuggestion;



@interface _TtC12SmartReplies30SRSmartRepliesActionSuggestion : TtC12SmartReplies24SRSmartRepliesSuggestion

@property (nonatomic, readonly) BOOL isRichSuggestion; // ivar: isRichSuggestion
@property (nonatomic, readonly) NSInteger type; // ivar: type


-(id)copyWithZone:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 isDynamicSuggestion:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 title:(id)arg1 isRichSuggestion:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif