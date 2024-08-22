// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDBUGSESSIONCONFIGURATION_H
#define DEDBUGSESSIONCONFIGURATION_H

@class NSSet, NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying, DEDSecureArchiving;

#import <Foundation/Foundation.h>

#import "DEDNotifierConfiguration.h"

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying, DEDSecureArchiving>

 {
    NSSet *_requestedCapabilities;
}


@property BOOL allowsCellularUpload; // ivar: _allowsCellularUpload
@property CGFloat bugSessionStartTimeout; // ivar: _bugSessionStartTimeout
@property (retain) NSString *cloudkitContainer; // ivar: _cloudkitContainer
@property (retain) NSDictionary *cloudkitData; // ivar: _cloudkitData
@property BOOL cloudkitUseDevelopmentEnvironment; // ivar: _cloudkitUseDevelopmentEnvironment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger finishingMove; // ivar: _finishingMove
@property (readonly) NSUInteger hash;
@property (retain) DEDNotifierConfiguration *notifierConfiguration; // ivar: _notifierConfiguration
@property NSInteger notifyingMove; // ivar: _notifyingMove
@property (retain) NSString *radarAuthToken; // ivar: _radarAuthToken
@property (retain) NSNumber *radarProblemID; // ivar: _radarProblemID
@property (readonly) NSString *requestedCapabilitiesString;
@property (retain) NSString *seedingDeviceToken; // ivar: _seedingDeviceToken
@property NSInteger seedingEnvironment; // ivar: _seedingEnvironment
@property (retain) NSString *seedingHost; // ivar: _seedingHost
@property NSInteger seedingSubmissionID; // ivar: _seedingSubmissionID
@property NSInteger seedingSubmissionType; // ivar: _seedingSubmissionType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)secureUnarchiveWithData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)requestedCapabilities;
-(id)secureArchive;
-(void)encodeWithCoder:(id)arg0 ;
-(void)requestCapabilities:(id)arg0 ;
-(void)requestCapabilitiesSet:(id)arg0 ;


@end


#endif