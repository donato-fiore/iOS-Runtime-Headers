// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCCREQUEST_H
#define PCCREQUEST_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PCCRequest : NSObject

@property (copy) id *callback; // ivar: _callback
@property (readonly) NSString *event; // ivar: _event
@property (readonly) NSString *jid; // ivar: _jid
@property (readonly) NSDictionary *options; // ivar: _options
@property (readonly) NSString *type; // ivar: _type


-(id)description;
-(id)initWithMessage:(id)arg0 options:(id)arg1 ;


@end


#endif