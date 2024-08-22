// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEBSERVICEREQUEST_H
#define PKWEBSERVICEREQUEST_H

@class NSMutableArray, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKWebServiceRequest : NSObject <NSSecureCoding>

 {
    NSMutableArray *_diagnosticReasonsList;
}


@property (copy, nonatomic) NSString *boundInterfaceIdentifier; // ivar: _boundInterfaceIdentifier
@property (nonatomic) NSUInteger cachePolicyOverride; // ivar: _cachePolicyOverride
@property (readonly, nonatomic) NSArray *diagnosticReasons;
@property (copy, nonatomic) NSString *sourceApplicationIdentifier; // ivar: _sourceApplicationIdentifier
@property (nonatomic) CGFloat timeoutOverride; // ivar: _timeoutOverride


+(BOOL)supportsSecureCoding;
+(id)_HTTPBodyWithDictionary:(id)arg0 ;
-(id)_murlRequestWithServiceURL:(id)arg0 endpointComponents:(id)arg1 queryParameters:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)_murlRequestWithURL:(id)arg0 ;
-(id)_murlRequestWithURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addDiagnosticReason:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif