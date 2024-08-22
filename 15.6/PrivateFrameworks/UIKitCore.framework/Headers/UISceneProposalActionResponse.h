// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISCENEPROPOSALACTIONRESPONSE_H
#define UISCENEPROPOSALACTIONRESPONSE_H

@class BSActionResponse, NSString;



@interface UISceneProposalActionResponse : BSActionResponse

@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;


+(id)responseWithPersistentIdentifier:(id)arg0 ;
+(id)responseWithSceneID:(id)arg0 ;
-(id)_responseWithPersistentIdentifier:(id)arg0 ;
-(id)initWithInfo:(id)arg0 error:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif