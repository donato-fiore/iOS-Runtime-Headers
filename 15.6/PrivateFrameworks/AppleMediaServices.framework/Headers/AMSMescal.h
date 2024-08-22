// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMESCAL_H
#define AMSMESCAL_H

@class NSString;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSMescal : NSObject <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_matchSignSapURL:(id)arg0 bagDictionary:(id)arg1 error:(*id)arg2 ;
+(BOOL)primeTheConnectionWithBag:(id)arg0 error:(*id)arg1 ;
+(BOOL)primeTheConnectionWithContract:(id)arg0 error:(*id)arg1 ;
+(BOOL)primeTheConnectionWithContract:(id)arg0 logKey:(id)arg1 error:(*id)arg2 ;
+(BOOL)shouldReprimeConnectionWithResult:(id)arg0 ;
+(BOOL)verifyTask:(id)arg0 data:(id)arg1 type:(NSInteger)arg2 bag:(id)arg3 error:(*id)arg4 ;
+(BOOL)verifyTask:(id)arg0 data:(id)arg1 type:(NSInteger)arg2 bagContract:(id)arg3 error:(*id)arg4 ;
+(BOOL)verifyTask:(id)arg0 data:(id)arg1 type:(NSInteger)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(*id)arg5 ;
+(id)_DAAPActionsForURLBagActions:(id)arg0 ;
+(id)_matchSignedActions:(id)arg0 withURL:(id)arg1 error:(*id)arg2 ;
+(id)_signedActionDataFromRequest:(id)arg0 policy:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)signatureFromData:(id)arg0 type:(NSInteger)arg1 bag:(id)arg2 error:(*id)arg3 ;
+(id)signatureFromData:(id)arg0 type:(NSInteger)arg1 bagContract:(id)arg2 error:(*id)arg3 ;
+(id)signatureFromData:(id)arg0 type:(NSInteger)arg1 bagContract:(id)arg2 logKey:(id)arg3 error:(*id)arg4 ;
+(id)signatureUsingRequest:(id)arg0 type:(NSInteger)arg1 bag:(id)arg2 error:(*id)arg3 ;
+(id)signatureUsingRequest:(id)arg0 type:(NSInteger)arg1 bagContract:(id)arg2 error:(*id)arg3 ;
+(id)signatureUsingRequest:(id)arg0 type:(NSInteger)arg1 bagContract:(id)arg2 logKey:(id)arg3 error:(*id)arg4 ;


@end


#endif