// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCAMERAREADEROUTPUT_H
#define CRCAMERAREADEROUTPUT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CRCameraReaderOutputInternal.h"

@interface CRCameraReaderOutput : NSObject

@property (readonly) NSString *formattedStringValue;
@property (retain) CRCameraReaderOutputInternal *objectInternal; // ivar: _objectInternal
@property (readonly) NSString *stringValue;
@property (readonly) NSString *type;


-(id)init;
-(id)initWithImageReaderOutput:(id)arg0 ;
-(void)dealloc;


@end


#endif