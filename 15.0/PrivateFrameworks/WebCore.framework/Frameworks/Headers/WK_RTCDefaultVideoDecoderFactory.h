// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WK_RTCDEFAULTVIDEODECODERFACTORY_H
#define WK_RTCDEFAULTVIDEODECODERFACTORY_H

@class NSString;
@protocol RTCVideoDecoderFactory;

#import <Foundation/Foundation.h>


@interface WK_RTCDefaultVideoDecoderFactory : NSObject <RTCVideoDecoderFactory>

 {
    BOOL _supportsH265;
    BOOL _supportsVP9Profile0;
    BOOL _supportsVP9Profile2;
    BOOL _supportsVP9VTB;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createDecoder:(id)arg0 ;
-(id)initWithH265:(BOOL)arg0 vp9Profile0:(BOOL)arg1 vp9Profile2:(BOOL)arg2 vp9VTB:(BOOL)arg3 ;
-(id)supportedCodecs;


@end


#endif