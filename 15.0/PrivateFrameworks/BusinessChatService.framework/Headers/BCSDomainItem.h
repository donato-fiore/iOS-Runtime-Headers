// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDOMAINITEM_H
#define BCSDOMAINITEM_H

@class NSString, NSDate;
@protocol BCSDomainItemProtocol;

#import <Foundation/Foundation.h>

#import "BCSDomainBundleIdPatterns.h"

@interface BCSDomainItem : NSObject <BCSDomainItemProtocol>



@property (copy, nonatomic) NSString *base64EncodedShardString; // ivar: _base64EncodedShardString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain;
@property (retain, nonatomic) BCSDomainBundleIdPatterns *domainBundleIDPatterns; // ivar: _domainBundleIDPatterns
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(id)initWithBase64EncodedShardString:(id)arg0 expirationDate:(id)arg1 ;


@end


#endif