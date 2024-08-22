// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDBETAAPPFEEDBACKMETADATA_H
#define ASDBETAAPPFEEDBACKMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASDBetaAppVersion.h"

@interface ASDBetaAppFeedbackMetadata : NSObject <NSSecureCoding>



@property (copy) NSString *email; // ivar: _email
@property (copy) NSString *incidentID; // ivar: _incidentID
@property (copy) ASDBetaAppVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif