// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCAMERACLIENTMETADATA_H
#define PFCAMERACLIENTMETADATA_H

@class NSArray, AVCapturePhotoPrivateClientMetadata, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFCameraClientMetadata : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *contactIDsInProximity; // ivar: _contactIDsInProximity
@property (retain, nonatomic) AVCapturePhotoPrivateClientMetadata *privateClientMetadata; // ivar: _privateClientMetadata
@property (copy, nonatomic) NSDictionary *sharedLibraryDiagnostics; // ivar: _sharedLibraryDiagnostics
@property (nonatomic) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrivateClientMetadata:(id)arg0 contactIDsInProximity:(id)arg1 sharedLibraryMode:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif