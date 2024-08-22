// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCRTCPSOURCEDESCRIPTION_H
#define AVCRTCPSOURCEDESCRIPTION_H

@class NSString;


#import "AVCRTCPPacket.h"

@interface AVCRTCPSourceDescription : AVCRTCPPacket

@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) unsigned char type; // ivar: _type


-(id)description;
-(id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg0 ;
-(void)dealloc;


@end


#endif