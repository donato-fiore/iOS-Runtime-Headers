// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKWEBAUTHENTICATIONASSERTIONRESPONSE_H
#define _WKWEBAUTHENTICATIONASSERTIONRESPONSE_H

@class NSString, NSData;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKWebAuthenticationAssertionResponse : NSObject <WKObject>

 {
    ObjectStorage<API::WebAuthenticationAssertionResponse> _response;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *userHandle;


-(void)dealloc;
-(void)setLAContext:(id)arg0 ;


@end


#endif