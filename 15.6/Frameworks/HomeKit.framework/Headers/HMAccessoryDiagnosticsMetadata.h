// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYDIAGNOSTICSMETADATA_H
#define HMACCESSORYDIAGNOSTICSMETADATA_H

@class NSNumber, NSURL, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HMAccessoryDiagnosticsMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSNumber *consentVersion; // ivar: _consentVersion
@property (readonly) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL
@property (readonly) NSString *snapshotPath; // ivar: _snapshotPath
@property (readonly) NSURL *uploadDestination; // ivar: _uploadDestination
@property (readonly) NSNumber *uploadType; // ivar: _uploadType
@property (readonly, copy) NSDictionary *urlParameters; // ivar: _urlParameters


+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSnapshotPath:(id)arg0 urlParameters:(id)arg1 privacyPolicyURL:(id)arg2 uploadDestination:(id)arg3 consentVersion:(id)arg4 uploadType:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif