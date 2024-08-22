// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APMETRIC_H
#define APMETRIC_H

@class NSArray, NSString, NSDictionary, NSDate;
@protocol APMetricProtocol;

#import <Foundation/Foundation.h>


@interface APMetric : NSObject <APMetricProtocol>



@property (nonatomic) BOOL areNetworkDates; // ivar: _areNetworkDates
@property (retain, nonatomic) NSArray *branches; // ivar: _branches
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, nonatomic) NSString *contextIdentifier; // ivar: _contextIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (retain, nonatomic) NSString *environment; // ivar: _environment
@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *internalProperties; // ivar: _internalProperties
@property (readonly, nonatomic) NSInteger metric; // ivar: _metric
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger order; // ivar: _order
@property (retain, nonatomic) NSString *os; // ivar: _os
@property (retain, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (retain, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties
@property (nonatomic) NSInteger purpose; // ivar: _purpose
@property (readonly, nonatomic) NSDictionary *relayData; // ivar: _relayData
@property (nonatomic) unsigned int source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *trace; // ivar: _trace
@property (retain, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)validateMetricAndSetupIdentifiers:(id)arg0 ;
-(id)_addOptionsToProperties:(id)arg0 ;
-(id)_descriptionWithFormat:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)duplicateMetricReplacingIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurpose:(NSInteger)arg0 metric:(NSInteger)arg1 contentIdentifier:(id)arg2 contextIdentifier:(id)arg3 identifier:(id)arg4 branches:(id)arg5 properties:(id)arg6 internalProperties:(id)arg7 relayData:(id)arg8 environment:(id)arg9 order:(NSInteger)arg10 options:(NSInteger)arg11 ;
-(id)initWithPurpose:(NSInteger)arg0 metric:(NSInteger)arg1 contentIdentifier:(id)arg2 contextIdentifier:(id)arg3 identifier:(id)arg4 properties:(id)arg5 internalProperties:(id)arg6 options:(NSInteger)arg7 ;
-(void)_replaceIdentifierWithIdentifier:(id)arg0 ;
-(void)addInternalPropertyValue:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initDeviceInfo;
-(void)initUndefinedDeviceInfo;
-(void)updatePurpose:(NSInteger)arg0 ;


@end


#endif