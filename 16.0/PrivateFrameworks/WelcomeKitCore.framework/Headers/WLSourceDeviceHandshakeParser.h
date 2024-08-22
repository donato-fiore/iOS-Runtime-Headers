// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLSOURCEDEVICEHANDSHAKEPARSER_H
#define WLSOURCEDEVICEHANDSHAKEPARSER_H


#import <Foundation/Foundation.h>


@interface WLSourceDeviceHandshakeParser : NSObject



-(?)_parseDeviceInfoNodemodifyingSourceDevice;
-(BOOL)parseData:(id)arg0 modifyingSourceDevice:(id)arg1 completion:(id)arg2 ;
-(id)_parseConnectionFailureReasons:(struct _xmlNode *)arg0 ;


@end


#endif