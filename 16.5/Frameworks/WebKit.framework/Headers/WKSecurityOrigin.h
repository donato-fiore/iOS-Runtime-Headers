// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSECURITYORIGIN_H
#define WKSECURITYORIGIN_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKSecurityOrigin : NSObject <WKObject>

 {
    ObjectStorage<API::SecurityOrigin> _securityOrigin;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) NSInteger port;
@property (readonly, copy, nonatomic) NSString *protocol;
@property (readonly) Class superclass;


-(BOOL)isSameSiteAsOrigin:(id)arg0 ;
-(BOOL)isSameSiteAsURL:(id)arg0 ;
-(void)dealloc;


@end


#endif