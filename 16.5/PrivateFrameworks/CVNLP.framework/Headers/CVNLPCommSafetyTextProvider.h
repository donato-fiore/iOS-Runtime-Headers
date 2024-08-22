// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPCOMMSAFETYTEXTPROVIDER_H
#define CVNLPCOMMSAFETYTEXTPROVIDER_H


#import <Foundation/Foundation.h>


@interface CVNLPCommSafetyTextProvider : NSObject



+(id)defaultTextProvider;
+(void)setDefaultTextProvider:(id)arg0 ;
-(void)provideTextItemsWithConversationIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 progressHandler:(id)arg3 ;


@end


#endif