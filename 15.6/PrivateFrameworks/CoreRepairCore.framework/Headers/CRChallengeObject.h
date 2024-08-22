// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCHALLENGEOBJECT_H
#define CRCHALLENGEOBJECT_H

@class NSString, NSNumber, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRChallengeObject : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *componentType; // ivar: componentType
@property (retain, nonatomic) NSNumber *keyIndex; // ivar: keyIndex
@property (retain, nonatomic) NSData *nonce; // ivar: nonce
@property (retain, nonatomic) NSDictionary *properties; // ivar: properties


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponentType:(id)arg0 challenge:(id)arg1 keyIndex:(id)arg2 properties:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif