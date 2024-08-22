// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUISHOWSCREENSHOTSERVICEREQUEST_H
#define SSUISHOWSCREENSHOTSERVICEREQUEST_H



#import "SSUIServiceRequest.h"
#import "SSUIServiceOptions.h"

@interface SSUIShowScreenshotServiceRequest : SSUIServiceRequest

@property (retain, nonatomic) SSUIServiceOptions *options; // ivar: _options


+(BOOL)supportsBSXPCSecureCoding;
+(id)entitlement;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif