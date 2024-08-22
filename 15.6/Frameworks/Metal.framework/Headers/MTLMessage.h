// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLMESSAGE_H
#define MTLMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLMessage : NSObject

@property (readonly, retain) NSString *string; // ivar: _string
@property (readonly) NSUInteger type; // ivar: _type


-(id)init:(NSUInteger)arg0 message:(id)arg1 ;
-(void)dealloc;


@end


#endif