// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCCREDENTIALPAYLOAD_H
#define DCCREDENTIALPAYLOAD_H

@class NSDate, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialPayload : NSObject <NSSecureCoding>



@property (retain) NSDate *createdAt; // ivar: _createdAt
@property (retain) NSString *docType; // ivar: _docType
@property NSUInteger format; // ivar: _format
@property (retain) NSData *payloadData; // ivar: _payloadData
@property (retain) NSDate *updatedAt; // ivar: _updatedAt
@property (retain) NSDate *validFrom; // ivar: _validFrom
@property (retain) NSDate *validUntil; // ivar: _validUntil


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif