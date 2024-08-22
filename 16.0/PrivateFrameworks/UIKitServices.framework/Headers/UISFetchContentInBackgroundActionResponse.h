// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISFETCHCONTENTINBACKGROUNDACTIONRESPONSE_H
#define UISFETCHCONTENTINBACKGROUNDACTIONRESPONSE_H

@class BSActionResponse;



@interface UISFetchContentInBackgroundActionResponse : BSActionResponse



+(id)responseWithResult:(NSUInteger)arg0 ;
-(NSUInteger)result;
-(id)initWithBackgroundFetchResult:(NSUInteger)arg0 ;
-(id)initWithInfo:(id)arg0 error:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif