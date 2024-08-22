// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEENDPOINTCA_H
#define SEENDPOINTCA_H

@class NSArray, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SEEndPointCA : NSObject <NSSecureCoding>



@property (retain) NSArray *certificates; // ivar: _certificates
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSData *instanceAID; // ivar: _instanceAID
@property (readonly) NSData *secureElementAttestation; // ivar: _secureElementAttestation
@property (readonly) NSString *subjectIdentifier; // ivar: _subjectIdentifier


+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg0 error:(*id)arg1 ;
+(id)endPointCAWithIdentifier:(id)arg0 subjectIdentifer:(id)arg1 instanceAID:(id)arg2 secureElementAttestation:(id)arg3 error:(*id)arg4 ;
-(id)description;
-(id)dumpState;
-(id)encodeWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif