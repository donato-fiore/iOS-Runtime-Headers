// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWATCHKITEXTENSIONREQUESTACTION_H
#define UIWATCHKITEXTENSIONREQUESTACTION_H

@class BSAction, NSDictionary;



@interface UIWatchKitExtensionRequestAction : BSAction

@property (readonly, retain, nonatomic) NSDictionary *request;


-(NSInteger)UIActionType;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithRequest:(id)arg0 withHandler:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(void)sendResponse:(id)arg0 ;


@end


#endif