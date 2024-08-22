// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTREQUEST_H
#define AMSENGAGEMENTREQUEST_H

@class NSURL, ACAccount, NSDictionary, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSEngagementRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *clientData; // ivar: _clientData
@property (nonatomic) NSInteger destinationStyle; // ivar: _destinationStyle
@property (nonatomic) BOOL failOnDismiss; // ivar: _failOnDismiss
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSDictionary *metricsOverlay; // ivar: _metricsOverlay
@property (retain, nonatomic) NSData *modelData; // ivar: _modelData
@property (retain, nonatomic) NSURL *originatingURL; // ivar: _originatingURL
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (nonatomic) BOOL silentlyCheckURL; // ivar: _silentlyCheckURL
@property (nonatomic) BOOL suppressInteractiveModalDismissal; // ivar: _suppressInteractiveModalDismissal


+(BOOL)supportsSecureCoding;
+(id)engagementRequestWithDictionary:(id)arg0 ;
-(NSInteger)_engagementPresentationStyleFromDictionary:(id)arg0 ;
-(id)_accountFromDictionary:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithModel:(id)arg0 destinationStyle:(NSInteger)arg1 ;
-(id)initWithRequestDictionary:(id)arg0 ;
-(id)modelForClass:(Class)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif