// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADDATABASEINITIALIZATIONOPTIONS_H
#define CADDATABASEINITIALIZATIONOPTIONS_H

@class NSArray, NSURL, NSString;
@protocol NSSecureCoding, CalCalendarDataContainerProvider, OS_tcc_identity;

#import <Foundation/Foundation.h>

#import "CADChangeTrackingClientId.h"

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowDelegateSources; // ivar: _allowDelegateSources
@property (retain, nonatomic) NSArray *allowedSourceIdentifiers; // ivar: _allowedSourceIdentifiers
@property (retain, nonatomic) NSObject<CalCalendarDataContainerProvider> *calendarDataContainerProvider; // ivar: _calendarDataContainerProvider
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId; // ivar: _changeTrackingClientId
@property (retain, nonatomic) NSURL *databaseDirectory; // ivar: _databaseDirectory
@property (nonatomic) int databaseInitOptions; // ivar: _databaseInitOptions
@property (nonatomic) BOOL enablePropertyModificationLogging; // ivar: _enablePropertyModificationLogging
@property (nonatomic) int management; // ivar: _management
@property (retain, nonatomic) NSString *managementBundleIdentifier; // ivar: _managementBundleIdentifier
@property (retain, nonatomic) NSObject<OS_tcc_identity> *privacyClientIdentity; // ivar: _privacyClientIdentity
@property (nonatomic) BOOL spotlightTesting; // ivar: _spotlightTesting
@property (nonatomic) BOOL unitTesting; // ivar: _unitTesting


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToOptions:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)validOptionsForConnection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)purifyOptions;


@end


#endif