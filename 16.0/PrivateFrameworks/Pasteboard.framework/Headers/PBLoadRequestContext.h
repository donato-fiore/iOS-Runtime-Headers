// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBLOADREQUESTCONTEXT_H
#define PBLOADREQUESTCONTEXT_H

@class UISPasteSharingToken;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBLoadRequestContext : NSObject <NSSecureCoding>

 {
    unsigned int _options;
}


@property (readonly, getter=isBlockingMainThread) BOOL blockingMainThread;
@property (readonly) BOOL clientHasFinishedLaunching;
@property (readonly, getter=isFromUIFramework) BOOL fromUIFramework;
@property (copy) UISPasteSharingToken *pasteSharingToken; // ivar: _pasteSharingToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(unsigned int)arg0 pasteSharingToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif