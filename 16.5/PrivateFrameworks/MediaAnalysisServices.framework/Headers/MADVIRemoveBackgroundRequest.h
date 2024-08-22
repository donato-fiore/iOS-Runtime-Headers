// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIREMOVEBACKGROUNDREQUEST_H
#define MADVIREMOVEBACKGROUNDREQUEST_H

@class NSNumber;


#import "MADRequest.h"

@interface MADVIRemoveBackgroundRequest : MADRequest

@property (nonatomic) BOOL cropToFit; // ivar: _cropToFit
@property (copy, nonatomic) NSNumber *imageType; // ivar: _imageType
@property (nonatomic) BOOL performInPlace; // ivar: _performInPlace
@property (nonatomic) BOOL returnMask; // ivar: _returnMask


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif