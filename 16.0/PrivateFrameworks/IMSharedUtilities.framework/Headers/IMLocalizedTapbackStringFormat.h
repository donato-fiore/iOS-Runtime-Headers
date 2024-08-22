// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMLOCALIZEDTAPBACKSTRINGFORMAT_H
#define IMLOCALIZEDTAPBACKSTRINGFORMAT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMLocalizedTapbackStringFormat : NSObject

@property (readonly, copy, nonatomic) NSString *localizedFormatString; // ivar: _localizedFormatString
@property (readonly, nonatomic) NSInteger localizedStringFormatType; // ivar: _localizedStringFormatType


-(id)initWithLocalizedStringFormatType:(NSInteger)arg0 unlocalizedFormatString:(id)arg1 ;


@end


#endif