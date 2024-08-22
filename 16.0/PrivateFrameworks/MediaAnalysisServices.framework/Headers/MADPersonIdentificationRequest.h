// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADPERSONIDENTIFICATIONREQUEST_H
#define MADPERSONIDENTIFICATIONREQUEST_H



#import "MADRequest.h"

@interface MADPersonIdentificationRequest : MADRequest

@property (nonatomic) BOOL allowOnDemand; // ivar: _allowOnDemand
@property (nonatomic) NSUInteger faceDetectorVisionRevision; // ivar: _faceDetectorVisionRevision
@property (nonatomic) NSUInteger maximumFaceCount; // ivar: _maximumFaceCount


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif