// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDIMPORTANTMLMODELINPUT_H
#define EDIMPORTANTMLMODELINPUT_H

@class NSSet, NSString;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface EDImportantMLModelInput : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat cc_contains_contact; // ivar: _cc_contains_contact
@property (nonatomic) CGFloat cc_is_top_direct_addresses_based_on_respond; // ivar: _cc_is_top_direct_addresses_based_on_respond
@property (nonatomic) CGFloat cc_is_top_direct_addresses_based_on_scroll; // ivar: _cc_is_top_direct_addresses_based_on_scroll
@property (nonatomic) CGFloat cc_is_top_direct_addresses_based_on_send; // ivar: _cc_is_top_direct_addresses_based_on_send
@property (nonatomic) CGFloat cc_is_top_direct_addresses_based_on_view; // ivar: _cc_is_top_direct_addresses_based_on_view
@property (nonatomic) CGFloat cc_is_top_indirect_addresses_based_on_respond; // ivar: _cc_is_top_indirect_addresses_based_on_respond
@property (nonatomic) CGFloat cc_is_top_indirect_addresses_based_on_scroll; // ivar: _cc_is_top_indirect_addresses_based_on_scroll
@property (nonatomic) CGFloat cc_is_top_indirect_addresses_based_on_send; // ivar: _cc_is_top_indirect_addresses_based_on_send
@property (nonatomic) CGFloat cc_is_top_indirect_addresses_based_on_view; // ivar: _cc_is_top_indirect_addresses_based_on_view
@property (nonatomic) CGFloat cc_is_vip; // ivar: _cc_is_vip
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CGFloat from_list_id; // ivar: _from_list_id
@property (nonatomic) CGFloat message_is_forward; // ivar: _message_is_forward
@property (nonatomic) CGFloat message_is_reply; // ivar: _message_is_reply
@property (nonatomic) CGFloat num_recipients; // ivar: _num_recipients
@property (nonatomic) CGFloat sender_is_contact; // ivar: _sender_is_contact
@property (nonatomic) CGFloat sender_is_top_direct_addresses_based_on_respond; // ivar: _sender_is_top_direct_addresses_based_on_respond
@property (nonatomic) CGFloat sender_is_top_direct_addresses_based_on_scroll; // ivar: _sender_is_top_direct_addresses_based_on_scroll
@property (nonatomic) CGFloat sender_is_top_direct_addresses_based_on_send; // ivar: _sender_is_top_direct_addresses_based_on_send
@property (nonatomic) CGFloat sender_is_top_direct_addresses_based_on_view; // ivar: _sender_is_top_direct_addresses_based_on_view
@property (nonatomic) CGFloat sender_is_top_indirect_addresses_based_on_respond; // ivar: _sender_is_top_indirect_addresses_based_on_respond
@property (nonatomic) CGFloat sender_is_top_indirect_addresses_based_on_scroll; // ivar: _sender_is_top_indirect_addresses_based_on_scroll
@property (nonatomic) CGFloat sender_is_top_indirect_addresses_based_on_send; // ivar: _sender_is_top_indirect_addresses_based_on_send
@property (nonatomic) CGFloat sender_is_top_indirect_addresses_based_on_view; // ivar: _sender_is_top_indirect_addresses_based_on_view
@property (nonatomic) CGFloat sender_is_vip; // ivar: _sender_is_vip
@property (nonatomic) CGFloat subject_is_top_words_based_on_respond; // ivar: _subject_is_top_words_based_on_respond
@property (nonatomic) CGFloat subject_is_top_words_based_on_scroll; // ivar: _subject_is_top_words_based_on_scroll
@property (nonatomic) CGFloat subject_is_top_words_based_on_send; // ivar: _subject_is_top_words_based_on_send
@property (nonatomic) CGFloat subject_is_top_words_based_on_view; // ivar: _subject_is_top_words_based_on_view
@property (retain, nonatomic) NSString *time_received; // ivar: _time_received
@property (nonatomic) CGFloat to_contains_contact; // ivar: _to_contains_contact
@property (nonatomic) CGFloat to_is_top_direct_addresses_based_on_respond; // ivar: _to_is_top_direct_addresses_based_on_respond
@property (nonatomic) CGFloat to_is_top_direct_addresses_based_on_scroll; // ivar: _to_is_top_direct_addresses_based_on_scroll
@property (nonatomic) CGFloat to_is_top_direct_addresses_based_on_send; // ivar: _to_is_top_direct_addresses_based_on_send
@property (nonatomic) CGFloat to_is_top_direct_addresses_based_on_view; // ivar: _to_is_top_direct_addresses_based_on_view
@property (nonatomic) CGFloat to_is_top_indirect_addresses_based_on_respond; // ivar: _to_is_top_indirect_addresses_based_on_respond
@property (nonatomic) CGFloat to_is_top_indirect_addresses_based_on_scroll; // ivar: _to_is_top_indirect_addresses_based_on_scroll
@property (nonatomic) CGFloat to_is_top_indirect_addresses_based_on_send; // ivar: _to_is_top_indirect_addresses_based_on_send
@property (nonatomic) CGFloat to_is_top_indirect_addresses_based_on_view; // ivar: _to_is_top_indirect_addresses_based_on_view
@property (nonatomic) CGFloat to_is_vip; // ivar: _to_is_vip
@property (nonatomic) CGFloat user_is_bcc; // ivar: _user_is_bcc
@property (nonatomic) CGFloat user_is_cc; // ivar: _user_is_cc
@property (nonatomic) CGFloat user_is_sender; // ivar: _user_is_sender
@property (nonatomic) CGFloat user_is_to; // ivar: _user_is_to


-(id)featureValueForName:(id)arg0 ;
-(id)initWithCc_contains_contact:(CGFloat)arg0 cc_is_top_direct_addresses_based_on_respond:(CGFloat)arg1 cc_is_top_direct_addresses_based_on_scroll:(CGFloat)arg2 cc_is_top_direct_addresses_based_on_send:(CGFloat)arg3 cc_is_top_direct_addresses_based_on_view:(CGFloat)arg4 cc_is_top_indirect_addresses_based_on_respond:(CGFloat)arg5 cc_is_top_indirect_addresses_based_on_scroll:(CGFloat)arg6 cc_is_top_indirect_addresses_based_on_send:(CGFloat)arg7 cc_is_top_indirect_addresses_based_on_view:(CGFloat)arg8 cc_is_vip:(CGFloat)arg9 from_list_id:(CGFloat)arg10 message_is_forward:(CGFloat)arg11 message_is_reply:(CGFloat)arg12 num_recipients:(CGFloat)arg13 sender_is_contact:(CGFloat)arg14 sender_is_top_direct_addresses_based_on_respond:(CGFloat)arg15 sender_is_top_direct_addresses_based_on_scroll:(CGFloat)arg16 sender_is_top_direct_addresses_based_on_send:(CGFloat)arg17 sender_is_top_direct_addresses_based_on_view:(CGFloat)arg18 sender_is_top_indirect_addresses_based_on_respond:(CGFloat)arg19 sender_is_top_indirect_addresses_based_on_scroll:(CGFloat)arg20 sender_is_top_indirect_addresses_based_on_send:(CGFloat)arg21 sender_is_top_indirect_addresses_based_on_view:(CGFloat)arg22 sender_is_vip:(CGFloat)arg23 subject_is_top_words_based_on_respond:(CGFloat)arg24 subject_is_top_words_based_on_scroll:(CGFloat)arg25 subject_is_top_words_based_on_send:(CGFloat)arg26 subject_is_top_words_based_on_view:(CGFloat)arg27 time_received:(id)arg28 to_contains_contact:(CGFloat)arg29 to_is_top_direct_addresses_based_on_respond:(CGFloat)arg30 to_is_top_direct_addresses_based_on_scroll:(CGFloat)arg31 to_is_top_direct_addresses_based_on_send:(CGFloat)arg32 to_is_top_direct_addresses_based_on_view:(CGFloat)arg33 to_is_top_indirect_addresses_based_on_respond:(CGFloat)arg34 to_is_top_indirect_addresses_based_on_scroll:(CGFloat)arg35 to_is_top_indirect_addresses_based_on_send:(CGFloat)arg36 to_is_top_indirect_addresses_based_on_view:(CGFloat)arg37 to_is_vip:(CGFloat)arg38 user_is_bcc:(CGFloat)arg39 user_is_cc:(CGFloat)arg40 user_is_sender:(CGFloat)arg41 user_is_to:(CGFloat)arg42 ;


@end


#endif