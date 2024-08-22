// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVMEDIACONTENTTASTEUPDATERESPONSE_H
#define SSVMEDIACONTENTTASTEUPDATERESPONSE_H

@class NSArray, NSString, NSDate;
@protocol SSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding>



@property (nonatomic, getter=isCachedResponse) BOOL cachedResponse; // ivar: _cachedResponse
@property (copy, nonatomic) NSArray *contentTasteItems; // ivar: _contentTasteItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger responseRevisionID; // ivar: _responseRevisionID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif