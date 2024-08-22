// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCCREDENTIALPAYLOAD_H
#define DCCREDENTIALPAYLOAD_H

@class NSDate, NSString, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialPayload : NSObject <NSSecureCoding>



@property (retain) NSDate *createdAt; // ivar: _createdAt
@property (retain) NSString *docType; // ivar: _docType
@property (retain) NSDictionary *elementIdentifiersByNamespace; // ivar: _elementIdentifiersByNamespace
@property NSUInteger format; // ivar: _format
@property (retain) NSData *payloadData; // ivar: _payloadData
@property NSUInteger protectionType; // ivar: _protectionType
@property (retain) NSDate *updatedAt; // ivar: _updatedAt
@property (retain) NSDate *validFrom; // ivar: _validFrom
@property (retain) NSDate *validUntil; // ivar: _validUntil


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif