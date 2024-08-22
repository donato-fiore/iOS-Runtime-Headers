// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8FEEDBACK19SANDBOXEXTENSIONURL_H
#define _TTC8FEEDBACK19SANDBOXEXTENSIONURL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8Feedback19SandboxExtensionURL : NSObject <NSSecureCoding>

 {
    ? state;
    ? url;
    ? sandboxToken;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif