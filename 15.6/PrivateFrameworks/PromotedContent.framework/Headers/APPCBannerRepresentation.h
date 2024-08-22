// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPCBANNERREPRESENTATION_H
#define APPCBANNERREPRESENTATION_H

@class NSString, NSNumber;


#import "APPCContentRepresentation.h"
#import "APPCOutstreamVideoInfo.h"

@interface APPCBannerRepresentation : APPCContentRepresentation {
    ? adTag;
}


@property (nonatomic, readonly) NSString *adTag;
@property (nonatomic, readonly) NSNumber *adamIdentifier; // ivar: adamIdentifier
@property (nonatomic, readonly) NSInteger appAdTemplateType; // ivar: appAdTemplateType
@property (nonatomic, readonly) APPCOutstreamVideoInfo *outstreamVideoInfo; // ivar: outstreamVideoInfo


-(id)initWithIdentifier:(id)arg0 adType:(NSInteger)arg1 desiredPosition:(NSInteger)arg2 privacyMarkerPosition:(NSInteger)arg3 adSize:(struct CGSize )arg4 tapAction:(id)arg5 adTag:(id)arg6 outstreamVideoInfo:(id)arg7 adamIdentifier:(id)arg8 tapActionTemplateType:(NSInteger)arg9 adPolicyData:(id)arg10 ;


@end


#endif