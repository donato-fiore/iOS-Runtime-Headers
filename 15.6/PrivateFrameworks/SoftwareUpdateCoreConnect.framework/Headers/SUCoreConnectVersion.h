// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORECONNECTVERSION_H
#define SUCORECONNECTVERSION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreConnectVersion : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSString *selectorString; // ivar: _selectorString


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSelector:(SEL)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif