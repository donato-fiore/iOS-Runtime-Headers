// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFREMOTETEXTSESSIONINFO_H
#define SFREMOTETEXTSESSIONINFO_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFRemoteTextSessionInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (copy, nonatomic) NSDictionary *rtiPayload; // ivar: _rtiPayload
@property (nonatomic) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRTIPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif