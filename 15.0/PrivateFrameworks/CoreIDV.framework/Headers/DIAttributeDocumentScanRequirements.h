// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIATTRIBUTEDOCUMENTSCANREQUIREMENTS_H
#define DIATTRIBUTEDOCUMENTSCANREQUIREMENTS_H

@class NSString;
@protocol NSSecureCoding;


#import "DIAttributeImageCaptureRequirements.h"

@interface DIAttributeDocumentScanRequirements : DIAttributeImageCaptureRequirements <NSSecureCoding>



@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif