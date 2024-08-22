// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSIGNATURES_H
#define MFSIGNATURES_H


#import <Foundation/Foundation.h>


@interface MFSignatures : NSObject



+(id)sharedInstance;
+(id)signatureMarkupFormat:(id)arg0 ;
+(id)signaturePlainTextFormat:(id)arg0 ;
-(BOOL)useAccountSignatures;
-(id)_getValue:(id)arg0 ;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg0 ;
-(id)defaultSignature;
-(id)init;
-(id)signature;
-(id)signatureForAccount:(id)arg0 ;
-(id)signatureForSendingEmailAddress:(id)arg0 ;
-(id)signatureMarkupForSendingEmailAddress:(id)arg0 ;
-(id)signaturePlainTextForSendingEmailAddress:(id)arg0 ;
-(void)clearSignature;
-(void)setSignature:(id)arg0 ;
-(void)setSignature:(id)arg0 forAccount:(id)arg1 ;
-(void)setSignature:(id)arg0 forEmailAddress:(id)arg1 ;
-(void)setUseAccountSignatures:(BOOL)arg0 ;


@end


#endif