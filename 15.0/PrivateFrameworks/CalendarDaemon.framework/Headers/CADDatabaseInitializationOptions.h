// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADDATABASEINITIALIZATIONOPTIONS_H
#define CADDATABASEINITIALIZATIONOPTIONS_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CADChangeTrackingClientId.h"

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowDelegateSources; // ivar: _allowDelegateSources
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId; // ivar: _changeTrackingClientId
@property (retain, nonatomic) NSURL *databaseDirectory; // ivar: _databaseDirectory
@property (nonatomic) int databaseInitOptions; // ivar: _databaseInitOptions
@property (nonatomic) BOOL enablePropertyModificationLogging; // ivar: _enablePropertyModificationLogging
@property (nonatomic) int management; // ivar: _management
@property (retain, nonatomic) NSString *managementBundleIdentifier; // ivar: _managementBundleIdentifier
@property (nonatomic) BOOL spotlightTesting; // ivar: _spotlightTesting
@property (nonatomic) BOOL unitTesting; // ivar: _unitTesting


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToOptions:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)validOptionsForConnection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif