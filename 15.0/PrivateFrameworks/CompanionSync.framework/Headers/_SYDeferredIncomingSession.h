// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SYDEFERREDINCOMINGSESSION_H
#define _SYDEFERREDINCOMINGSESSION_H

@class NSString, IDSMessageContext, NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface _SYDeferredIncomingSession : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) IDSMessageContext *idsContext; // ivar: _idsContext
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSURL *resourceURL; // ivar: _resourceURL




@end


#endif