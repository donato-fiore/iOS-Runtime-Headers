// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSECURITYSCOPEDURL_H
#define INSECURITYSCOPEDURL_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface INSecurityScopedURL : NSObject {
    NSInteger _accessCount;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)startAccessingSecurityScopedResource;
-(id)initWithURL:(id)arg0 ;
-(void)stopAccessingSecurityScopedResource;


@end


#endif