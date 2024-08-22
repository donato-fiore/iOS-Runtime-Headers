// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGSONIFY_H
#define SIGSONIFY_H


#import <Foundation/Foundation.h>


@interface SigSonify : NSObject



+(BOOL)ConvertException:(struct exception *)arg0 toError:(*id)arg1 ;
+(BOOL)ConvertSystemError:(struct system_error *)arg0 toError:(*id)arg1 ;
+(BOOL)FillUnknownError:(*id)arg0 ;
+(id)sonifySignature:(id)arg0 withSampleRate:(unsigned int)arg1 error:(*id)arg2 ;


@end


#endif