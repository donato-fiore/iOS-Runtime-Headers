// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTEMPLATEICONMONOGRAMGENERATOR_H
#define WBSTEMPLATEICONMONOGRAMGENERATOR_H


#import <Foundation/Foundation.h>


@interface WBSTemplateIconMonogramGenerator : NSObject



+(id)_monogramStringForPreparedTitle:(id)arg0 url:(id)arg1 ;
+(id)monogramStringForTitle:(id)arg0 url:(id)arg1 ;
+(id)monogramStringForURL:(id)arg0 ;
+(id)monogramWithTitle:(id)arg0 url:(id)arg1 backgroundColor:(id)arg2 ;
+(id)monogramWithTitle:(id)arg0 url:(id)arg1 monogramConfiguration:(id)arg2 ;
+(id)monogramWithTitle:(id)arg0 url:(id)arg1 size:(struct CGSize )arg2 fontSize:(CGFloat)arg3 fontWeight:(NSInteger)arg4 baselineOffset:(CGFloat)arg5 backgroundColor:(id)arg6 cornerRadius:(CGFloat)arg7 ;
+(id)monogramWithTitle:(id)arg0 url:(id)arg1 size:(struct CGSize )arg2 fontSize:(CGFloat)arg3 fontWeight:(NSInteger)arg4 baselineOffset:(CGFloat)arg5 backgroundColor:(id)arg6 foregroundColor:(id)arg7 cornerRadius:(CGFloat)arg8 ;


@end


#endif