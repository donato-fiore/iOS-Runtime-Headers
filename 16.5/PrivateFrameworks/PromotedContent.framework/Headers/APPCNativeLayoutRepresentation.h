// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCNATIVELAYOUTREPRESENTATION_H
#define APPCNATIVELAYOUTREPRESENTATION_H

@class NSString, NSArray;


#import "APPCContentRepresentation.h"

@interface APPCNativeLayoutRepresentation : APPCContentRepresentation {
    ? headline;
    ? accessibilityHeadline;
    ? adCopy;
    ? accessibilityAdCopy;
    ? sponsoredBy;
    ? elements;
}


@property (nonatomic, readonly) NSString *accessibilityAdCopy;
@property (nonatomic, readonly) NSString *accessibilityHeadline;
@property (nonatomic, readonly) NSString *adCopy;
@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) NSString *sponsoredBy;


-(id)initWithIdentifier:(id)arg0 adType:(NSInteger)arg1 desiredPosition:(NSInteger)arg2 privacyMarkerPosition:(NSInteger)arg3 adSize:(struct CGSize )arg4 headline:(id)arg5 accessibilityHeadline:(id)arg6 adCopy:(id)arg7 accessibilityAdCopy:(id)arg8 sponsoredBy:(id)arg9 elements:(id)arg10 adPolicyData:(id)arg11 ;


@end


#endif