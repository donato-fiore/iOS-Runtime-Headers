// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIINFOVIEWMODEL_H
#define CDPUIINFOVIEWMODEL_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CDPEscapeOption.h"

@interface CDPUIInfoViewModel : NSObject <NSCopying>



@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) CDPEscapeOption *option1; // ivar: _option1
@property (retain, nonatomic) CDPEscapeOption *option2; // ivar: _option2
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif