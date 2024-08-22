// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWATCHKITEXTENSIONREQUESTACTIONRESPONSE_H
#define UIWATCHKITEXTENSIONREQUESTACTIONRESPONSE_H

@class BSActionResponse, NSDictionary;



@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse

@property (readonly, nonatomic) NSDictionary *result;


+(id)responseWithWatchKitExtensionResult:(id)arg0 ;
-(id)initWithWatchKitExtensionResult:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif