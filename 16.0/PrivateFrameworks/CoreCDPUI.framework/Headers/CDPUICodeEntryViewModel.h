// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPUICODEENTRYVIEWMODEL_H
#define CDPUICODEENTRYVIEWMODEL_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CDPRemoteValidationEscapeOffer.h"

@interface CDPUICodeEntryViewModel : NSObject <NSCopying>



@property (copy, nonatomic) id *codeEnteredAction; // ivar: _codeEnteredAction
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer; // ivar: _escapeOffer
@property (copy, nonatomic) NSString *promptMessage; // ivar: _promptMessage
@property (copy, nonatomic) NSString *promptTitle; // ivar: _promptTitle


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif