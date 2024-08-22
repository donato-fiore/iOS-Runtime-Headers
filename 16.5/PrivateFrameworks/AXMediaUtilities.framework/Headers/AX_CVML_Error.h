// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AX_CVML_ERROR_H
#define AX_CVML_ERROR_H


#import <Foundation/Foundation.h>


@interface AX_CVML_Error : NSObject



+(id)createNSErrorWithStatus:(NSInteger)arg0 andMessage:(id)arg1 ;
+(id)createNSExceptionWithStatus:(NSInteger)arg0 andMessage:(id)arg1 ;


@end


#endif