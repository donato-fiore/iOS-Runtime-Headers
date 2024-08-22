// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLURRANNOTATION_H
#define SIRINLURRANNOTATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLURRAnnotation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif