// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUICUSTODIANINSTRUCTIONSVIEWMODEL_H
#define CDPUICUSTODIANINSTRUCTIONSVIEWMODEL_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CDPEscapeOption.h"
#import "CDPRemoteValidationEscapeOffer.h"

@interface CDPUICustodianInstructionsViewModel : NSObject <NSCopying>



@property (retain, nonatomic) CDPEscapeOption *continueOption; // ivar: _continueOption
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer; // ivar: _escapeOffer
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (copy, nonatomic) NSString *instructionHeader; // ivar: _instructionHeader
@property (copy, nonatomic) NSString *instructions; // ivar: _instructions
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif