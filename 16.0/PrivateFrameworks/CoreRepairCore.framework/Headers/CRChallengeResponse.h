// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCHALLENGERESPONSE_H
#define CRCHALLENGERESPONSE_H

@class NSString, NSNumber, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRChallengeResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *componentType; // ivar: componentType
@property (retain, nonatomic) NSString *identifer; // ivar: identifer
@property (retain, nonatomic) NSNumber *keyIndex; // ivar: keyIndex
@property (retain, nonatomic) NSDictionary *properties; // ivar: properties
@property (retain, nonatomic) NSData *signedResponse; // ivar: signedResponse


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponentType:(id)arg0 identifer:(id)arg1 signedResponse:(id)arg2 keyIndex:(id)arg3 properties:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif