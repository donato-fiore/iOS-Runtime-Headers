// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONTVSERVICEPRESENTER_H
#define AKAUTHORIZATIONTVSERVICEPRESENTER_H


#import <Foundation/Foundation.h>


@interface AKAuthorizationTVServicePresenter : NSObject



-(NSInteger)_typeFromString:(id)arg0 ;
-(NSInteger)typeOfMessage:(id)arg0 ;
-(id)_filterDeprecatedType:(id)arg0 ;
-(id)_stringForType:(NSInteger)arg0 ;
-(id)buildDidStartServerAuthorizationMessage;
-(id)buildDidTapNotificationMessage;
-(id)buildFetchAppIconMessage;
-(id)buildFetchAppIconReplyWithImageData:(id)arg0 imageScale:(id)arg1 ;


@end


#endif