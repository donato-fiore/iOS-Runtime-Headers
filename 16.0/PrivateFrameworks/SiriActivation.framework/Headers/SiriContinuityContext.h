// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICONTINUITYCONTEXT_H
#define SIRICONTINUITYCONTEXT_H

@class NSNumber, AFRequestInfo, NSDictionary;


#import "SiriContext.h"

@interface SiriContinuityContext : SiriContext {
    NSNumber *_isTemporaryDevice;
}


@property (readonly, nonatomic) AFRequestInfo *requestInfo; // ivar: _requestInfo
@property (readonly, nonatomic) NSDictionary *userActivity; // ivar: _userActivity


+(BOOL)supportsSecureCoding;
-(BOOL)isTemporaryDevice;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestInfo:(id)arg0 ;
-(id)initWithSpeechRequestOptions:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;
-(id)speechRequestOptions;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif