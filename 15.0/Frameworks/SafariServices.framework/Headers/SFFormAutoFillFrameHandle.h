// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFFORMAUTOFILLFRAMEHANDLE_H
#define SFFORMAUTOFILLFRAMEHANDLE_H

@class NSURL, NSString, _WKFrameHandle;
@protocol NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle;

#import <Foundation/Foundation.h>


@interface SFFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle>

 {
    NSURL *_URL;
    *__SecTrust _serverTrust;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _WKFrameHandle *frameHandle; // ivar: _frameHandle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *webui_URL;
@property (readonly, nonatomic) *__SecTrust webui_serverTrust;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrameHandle:(id)arg0 URL:(id)arg1 serverTrust:(struct __SecTrust *)arg2 ;
-(id)initWithWebProcessPlugInFrame:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif