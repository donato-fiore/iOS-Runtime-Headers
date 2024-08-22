// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRIDEBUGUIREQUEST_H
#define AFSIRIDEBUGUIREQUEST_H

@class NSString;


#import "AFSiriRequest.h"

@interface AFSiriDebugUIRequest : AFSiriRequest {
    NSString *_message;
    BOOL _frontmost;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_makeAppFrontmost;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessage:(id)arg0 makeAppFrontmost:(BOOL)arg1 ;
-(id)message;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif