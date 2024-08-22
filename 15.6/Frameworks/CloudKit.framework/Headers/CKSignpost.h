// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSIGNPOST_H
#define CKSIGNPOST_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CKSignpost : NSObject

@property (readonly) NSUInteger identifier; // ivar: _identifier
@property (readonly) NSObject<OS_os_log> *log; // ivar: _log


+(id)developerSignpost;
+(id)signpost;
-(id)init;
-(id)initWithLog:(id)arg0 ;


@end


#endif