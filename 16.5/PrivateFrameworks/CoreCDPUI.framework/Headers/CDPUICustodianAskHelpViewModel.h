// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUICUSTODIANASKHELPVIEWMODEL_H
#define CDPUICUSTODIANASKHELPVIEWMODEL_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CDPRemoteValidationEscapeOffer.h"
#import "CDPEscapeOption.h"

@interface CDPUICustodianAskHelpViewModel : NSObject <NSCopying>



@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *dontAskForHelpOption; // ivar: _dontAskForHelpOption
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (retain, nonatomic) CDPEscapeOption *getHelpNowOption; // ivar: _getHelpNowOption
@property (copy, nonatomic) NSString *iconName; // ivar: _iconName
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif