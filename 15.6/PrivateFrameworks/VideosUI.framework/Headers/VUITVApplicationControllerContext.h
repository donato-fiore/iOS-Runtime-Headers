// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUITVAPPLICATIONCONTROLLERCONTEXT_H
#define VUITVAPPLICATIONCONTROLLERCONTEXT_H

@class NSURL, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUITVApplicationControllerContext : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *javaScriptApplicationURL; // ivar: _javaScriptApplicationURL
@property (copy, nonatomic) NSDictionary *launchOptions; // ivar: _launchOptions


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif