// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKUPLOADREQUESTCONFIGURATION_H
#define CKUPLOADREQUESTCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying, CKSQLiteItem;

#import <Foundation/Foundation.h>

#import "CKRecordZoneID.h"

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem>



@property (copy) NSString *applicationBundleIdentifierOverride; // ivar: _applicationBundleIdentifierOverride
@property (copy) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) CKRecordZoneID *repairZoneID; // ivar: _repairZoneID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)configurationFromBaseContainer:(id)arg0 ;
+(id)resolvedConfigurationWithBaseContainer:(id)arg0 overrides:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromBaseContainer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)sqliteRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif