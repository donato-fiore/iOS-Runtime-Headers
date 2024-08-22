// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDIMPORTANTMLMODEL_H
#define EDIMPORTANTMLMODEL_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface EDImportantMLModel : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromCc_contains_contact:(CGFloat)arg0 cc_is_top_direct_addresses_based_on_respond:(CGFloat)arg1 cc_is_top_direct_addresses_based_on_scroll:(CGFloat)arg2 cc_is_top_direct_addresses_based_on_send:(CGFloat)arg3 cc_is_top_direct_addresses_based_on_view:(CGFloat)arg4 cc_is_top_indirect_addresses_based_on_respond:(CGFloat)arg5 cc_is_top_indirect_addresses_based_on_scroll:(CGFloat)arg6 cc_is_top_indirect_addresses_based_on_send:(CGFloat)arg7 cc_is_top_indirect_addresses_based_on_view:(CGFloat)arg8 cc_is_vip:(CGFloat)arg9 from_list_id:(CGFloat)arg10 message_is_forward:(CGFloat)arg11 message_is_reply:(CGFloat)arg12 num_recipients:(CGFloat)arg13 sender_is_contact:(CGFloat)arg14 sender_is_top_direct_addresses_based_on_respond:(CGFloat)arg15 sender_is_top_direct_addresses_based_on_scroll:(CGFloat)arg16 sender_is_top_direct_addresses_based_on_send:(CGFloat)arg17 sender_is_top_direct_addresses_based_on_view:(CGFloat)arg18 sender_is_top_indirect_addresses_based_on_respond:(CGFloat)arg19 sender_is_top_indirect_addresses_based_on_scroll:(CGFloat)arg20 sender_is_top_indirect_addresses_based_on_send:(CGFloat)arg21 sender_is_top_indirect_addresses_based_on_view:(CGFloat)arg22 sender_is_vip:(CGFloat)arg23 subject_is_top_words_based_on_respond:(CGFloat)arg24 subject_is_top_words_based_on_scroll:(CGFloat)arg25 subject_is_top_words_based_on_send:(CGFloat)arg26 subject_is_top_words_based_on_view:(CGFloat)arg27 time_received:(id)arg28 to_contains_contact:(CGFloat)arg29 to_is_top_direct_addresses_based_on_respond:(CGFloat)arg30 to_is_top_direct_addresses_based_on_scroll:(CGFloat)arg31 to_is_top_direct_addresses_based_on_send:(CGFloat)arg32 to_is_top_direct_addresses_based_on_view:(CGFloat)arg33 to_is_top_indirect_addresses_based_on_respond:(CGFloat)arg34 to_is_top_indirect_addresses_based_on_scroll:(CGFloat)arg35 to_is_top_indirect_addresses_based_on_send:(CGFloat)arg36 to_is_top_indirect_addresses_based_on_view:(CGFloat)arg37 to_is_vip:(CGFloat)arg38 user_is_bcc:(CGFloat)arg39 user_is_cc:(CGFloat)arg40 user_is_sender:(CGFloat)arg41 user_is_to:(CGFloat)arg42 error:(*id)arg43 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif