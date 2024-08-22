// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIBOOTURLCONTROLLER_H
#define VUIBOOTURLCONTROLLER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface VUIBootURLController : NSObject

@property (retain, nonatomic) NSURL *localAppURL; // ivar: _localAppURL


-(id)init;
-(id)initWithLocalAppURL:(id)arg0 ;
-(void)fetchBootURLWithCompletionHandler:(id)arg0 ;


@end


#endif