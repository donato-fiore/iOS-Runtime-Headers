// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPURCHASERESPONSE_H
#define SSPURCHASERESPONSE_H

@class NSMutableDictionary, NSString, NSArray, NSError, NSDictionary;
@protocol SSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SSURLConnectionResponse.h"
#import "SSPurchase.h"

@interface SSPurchaseResponse : NSObject <SSXPCCoding, NSSecureCoding>

 {
    NSMutableDictionary *_transactionIdentifiers;
}


@property (retain, nonatomic) SSURLConnectionResponse *URLResponse; // ivar: _response
@property (nonatomic) BOOL cancelsPurchaseBatch; // ivar: _cancelsPurchaseBatch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *downloadIdentifiers; // ivar: _downloadIdentifiers
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SSPurchase *purchase; // ivar: _purchase
@property (nonatomic) CGFloat requestStartTime; // ivar: _requestStartTime
@property (nonatomic) CGFloat responseEndTime; // ivar: _responseEndTime
@property (nonatomic) CGFloat responseStartTime; // ivar: _responseStartTime
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tidHeaders; // ivar: _tidHeaders


+(BOOL)supportsSecureCoding;
-(id)copyXPCEncoding;
-(id)downloadMetadataForItemIdentifier:(NSInteger)arg0 ;
-(id)downloadsMetadata;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)responseMetrics;
-(id)transactionIdentifierForItemIdentifier:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif