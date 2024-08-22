// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APMETRIC_H
#define APMETRIC_H

@class NSString, NSDictionary, NSDate;
@protocol APMetricProtocol;

#import <Foundation/Foundation.h>


@interface APMetric : NSObject <APMetricProtocol>



@property (nonatomic) BOOL areNetworkDates; // ivar: _areNetworkDates
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (readonly, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, nonatomic) NSString *contextIdentifier; // ivar: _contextIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *internalProperties; // ivar: _internalProperties
@property (readonly, nonatomic) NSInteger metric; // ivar: _metric
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) NSString *os; // ivar: _os
@property (retain, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (retain, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSInteger route; // ivar: _route
@property (readonly, nonatomic) NSDictionary *serverDictionaryRepresentation;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)validateMetricAndSetupIdentifiers:(id)arg0 ;
-(id)_descriptionWithFormat:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)duplicateMetricReplacingIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoute:(NSInteger)arg0 metric:(NSInteger)arg1 contentIdentifier:(id)arg2 contextIdentifier:(id)arg3 identifier:(id)arg4 properties:(id)arg5 internalProperties:(id)arg6 options:(NSInteger)arg7 ;
-(void)_replaceIdentifierWithIdentifier:(id)arg0 ;
-(void)addInternalPropertyValue:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initDeviceInfo;
-(void)initUndefinedDeviceInfo;


@end


#endif