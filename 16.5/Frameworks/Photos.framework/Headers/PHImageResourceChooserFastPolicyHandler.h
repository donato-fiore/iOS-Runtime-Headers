// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMAGERESOURCECHOOSERFASTPOLICYHANDLER_H
#define PHIMAGERESOURCECHOOSERFASTPOLICYHANDLER_H



#import "PHImageResourceChooserPolicyHandler.h"

@interface PHImageResourceChooserFastPolicyHandler : PHImageResourceChooserPolicyHandler



+(NSUInteger)qualifyResourceInfo:(id)arg0 againstPolicy:(NSInteger)arg1 requestInfo:(id)arg2 reversed:(BOOL)arg3 tooLargeForPolicy:(*BOOL)arg4 disqualificationReason:(*id)arg5 ;


@end


#endif