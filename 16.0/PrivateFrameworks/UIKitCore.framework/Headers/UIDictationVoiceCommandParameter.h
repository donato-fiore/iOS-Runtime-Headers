// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONVOICECOMMANDPARAMETER_H
#define UIDICTATIONVOICECOMMANDPARAMETER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIDictationVoiceCommandParameter : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif