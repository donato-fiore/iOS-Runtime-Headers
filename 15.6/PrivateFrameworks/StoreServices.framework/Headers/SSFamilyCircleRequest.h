// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSFAMILYCIRCLEREQUEST_H
#define SSFAMILYCIRCLEREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding>



@property (nonatomic) NSInteger authenticationPromptStyle; // ivar: _authenticationPromptStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchITunesAccountNames; // ivar: _fetchITunesAccountNames
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif