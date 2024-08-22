// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORHWENCODING_H
#define _BLASTDOORHWENCODING_H


#import <Foundation/Foundation.h>


@interface _BlastDoorHWEncoding : NSObject



+(id)dataRepresentation:(id)arg0 frame:(struct CGRect )arg1 bound:(struct CGRect )arg2 uuid:(id)arg3 date:(id)arg4 ;
+(id)decodeHandwritingFromData:(id)arg0 ;
+(id)encodeHandwriting:(id)arg0 compress:(BOOL)arg1 ;


@end


#endif