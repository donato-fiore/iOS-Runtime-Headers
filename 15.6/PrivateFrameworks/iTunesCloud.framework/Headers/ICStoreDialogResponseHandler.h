// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTOREDIALOGRESPONSEHANDLER_H
#define ICSTOREDIALOGRESPONSEHANDLER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICStoreDialogResponseHandler : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _allowsHandlingNonAuthenticationDialogs;
    BOOL _shouldRecordLastAuthenticationDialogResponseTime;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_handleAuthenticationStoreDialogResponse:(id)arg0 usingRequestContext:(id)arg1 withDialogTimeout:(CGFloat)arg2 withCompletionHandler:(id)arg3 ;
-(void)_handleBuyButtonAction:(id)arg0 usingRequestContext:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_handleDefaultStoreDialogResponse:(id)arg0 usingRequestContext:(id)arg1 withDialogTimeout:(CGFloat)arg2 withCompletionHandler:(id)arg3 ;
-(void)_handleFamilyPermissionButtonAction:(id)arg0 usingRequestContext:(id)arg1 completion:(id)arg2 ;
-(void)_handleGotoButtonAction:(id)arg0 usingRequestContext:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleButtonAction:(id)arg0 usingRequestContext:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleStoreDialogResponse:(id)arg0 usingRequestContext:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleStoreDialogResponse:(id)arg0 usingRequestContext:(id)arg1 withDialogTimeout:(CGFloat)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif