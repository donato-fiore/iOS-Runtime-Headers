// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIINHERITANCEACCESSKEYPDFGENERATOR_H
#define AAUIINHERITANCEACCESSKEYPDFGENERATOR_H

@class NSString, AAInheritanceContactController;

#import <Foundation/Foundation.h>


@interface AAUIInheritanceAccessKeyPDFGenerator : NSObject {
    NSString *_ownerDisplayName;
    NSString *_ownerFirstName;
    NSString *_ownerEmailAddress;
    NSString *_contactDisplayName;
    AAInheritanceContactController *_contactController;
}




-(CGFloat)_renderAccountDetailsWithPageRect:(struct CGRect )arg0 yPosition:(CGFloat)arg1 ;
-(CGFloat)_renderMessageWithPageRect:(struct CGRect )arg0 yPosition:(CGFloat)arg1 ;
-(CGFloat)_renderQRCodeImageWithPageRect:(struct CGRect )arg0 yPosition:(CGFloat)arg1 ;
-(CGFloat)_renderRectBoxWithPageRect:(struct CGRect )arg0 yPosition:(CGFloat)arg1 drawContext:(struct CGContext *)arg2 ;
-(CGFloat)_renderTitleWithPageRect:(struct CGRect )arg0 ;
-(id)_attributedStringWithField:(id)arg0 value:(id)arg1 ;
-(id)_pdfMetaData;
-(id)createPDFDocumentData;
-(id)initWithAppleAccount:(id)arg0 localContactInfo:(id)arg1 ;
-(void)_renderAccessKeyWithPageRect:(struct CGRect )arg0 yPosition:(CGFloat)arg1 ;
-(void)_renderFooterWithPageRect:(struct CGRect )arg0 yPosition:(CGFloat)arg1 ;
-(void)_renderLogoImageWithPageRect:(struct CGRect )arg0 ;


@end


#endif