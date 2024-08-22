// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSMESSAGELIVELAYOUT_H
#define MSMESSAGELIVELAYOUT_H

@class NSArray;
@protocol NSSecureCoding;


#import "MSMessageLayout.h"
#import "MSMessageTemplateLayout.h"

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding>



@property (readonly, nonatomic) MSMessageTemplateLayout *alternateLayout; // ivar: _alternateLayout
@property (retain, nonatomic) NSArray *requiredCapabilities; // ivar: _requiredCapabilities


+(BOOL)supportsSecureCoding;
-(id)_sanitizedCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAlternateLayout:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif