// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDCPAYLOADBUILDERDETAILS_H
#define CIDCPAYLOADBUILDERDETAILS_H

@class NSData, NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface CIDCPayloadBuilderDetails : NSObject

@property (retain) NSData *deviceKey; // ivar: _deviceKey
@property (retain) NSString *docType; // ivar: _docType
@property (retain) NSDictionary *elements; // ivar: _elements
@property NSUInteger format; // ivar: _format
@property NSInteger signingAlgorithm; // ivar: _signingAlgorithm
@property (retain) NSDate *validFrom; // ivar: _validFrom
@property (retain) NSDate *validUntil; // ivar: _validUntil


-(id)initWithFormat:(NSUInteger)arg0 docType:(id)arg1 elements:(id)arg2 validFrom:(id)arg3 validUntil:(id)arg4 deviceKey:(id)arg5 ;
-(id)initWithFormat:(NSUInteger)arg0 docType:(id)arg1 elements:(id)arg2 validFrom:(id)arg3 validUntil:(id)arg4 deviceKey:(id)arg5 signingAlgorithm:(NSInteger)arg6 ;


@end


#endif