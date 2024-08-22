// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SDPMEDIALINE_H
#define SDPMEDIALINE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "VCImageAttributeRules.h"

@interface SDPMediaLine : NSObject

@property (readonly, nonatomic) BOOL allowRTCPFB; // ivar: _allowRTCPFB
@property (readonly, nonatomic) NSArray *attributes; // ivar: _attributes
@property (retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // ivar: _imageAttributeRules
@property (readonly, nonatomic) NSArray *payloads; // ivar: _payloads
@property (readonly, nonatomic) int rtcpPort; // ivar: _rtcpPort
@property (nonatomic) unsigned int rtpId; // ivar: _rtpId
@property (readonly, nonatomic) int rtpPort; // ivar: _rtpPort
@property (readonly, nonatomic) NSString *string;


+(void)fillImageArray:(id)arg0 imageArray:(struct imageTag *)arg1 ;
+(void)fillImageStruct:(id)arg0 imageStruct:(struct imageTag *)arg1 ;
+(void)fillImageStructWithDictionary:(id)arg0 forInterface:(int)arg1 imageStruct:(struct imageTag *)arg2 ;
-(BOOL)supportImage:(id)arg0 width:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(BOOL)videoDisplayAttribute:(*int)arg0 withHeight:(*int)arg1 ;
-(id)getVideoRecvImages:(id)arg0 ;
-(id)getVideoSendImages:(id)arg0 ;
-(id)init;
-(id)initWithParser:(id)arg0 rtpPort:(int)arg1 payloads:(id)arg2 ;
-(id)videoImageAttributes:(int)arg0 ;
-(void)addAttribute:(id)arg0 ;
-(void)addImageAttributeRules:(id)arg0 transportType:(unsigned char)arg1 payload:(int)arg2 direction:(int)arg3 attributeString:(id)arg4 ;
-(void)addPayload:(int)arg0 rtpMap:(id)arg1 formatParameters:(id)arg2 ;
-(void)addVideoImageAttr:(id)arg0 ForPayload:(int)arg1 ;
-(void)addWifiRules:(id)arg0 cellularRules:(id)arg1 payload:(int)arg2 direction:(int)arg3 ;
-(void)appendPayload:(int)arg0 dimensions:(struct imageTag *)arg1 direction:(int)arg2 attributeString:(id)arg3 ;
-(void)createVideoImageAttr:(int)arg0 direction:(int)arg1 dimensions:(struct imageTag *)arg2 count:(int)arg3 ;
-(void)dealloc;
-(void)parseAttribute:(id)arg0 ;
-(void)parseImageAttributeRules:(id)arg0 ;
-(void)parseMediaLine:(id)arg0 ;


@end


#endif