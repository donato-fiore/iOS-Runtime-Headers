// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSMSFILTERHELPER_H
#define IMSMSFILTERHELPER_H


#import <Foundation/Foundation.h>


@interface IMSMSFilterHelper : NSObject



+(BOOL)isValidActiveFilterAction:(NSInteger)arg0 subAction:(NSInteger)arg1 ;
+(NSInteger)filterActionForCategory:(NSInteger)arg0 ;
+(NSInteger)filterSubActionForCategory:(NSInteger)arg0 subCategory:(NSInteger)arg1 ;
+(NSUInteger)conversationFilterModeForMessageFilter:(NSUInteger)arg0 ;
+(id)fetchSMSFilterExtensionParams;
+(id)fetchSMSFilterParamForCategory:(NSInteger)arg0 subCategory:(NSInteger)arg1 ;
+(id)filterLabelForAction:(NSInteger)arg0 subAction:(NSInteger)arg1 ;
+(id)smsFilterParamForFilterMode:(NSUInteger)arg0 ;
+(void)updateSMSFilterExtensionParams;


@end


#endif