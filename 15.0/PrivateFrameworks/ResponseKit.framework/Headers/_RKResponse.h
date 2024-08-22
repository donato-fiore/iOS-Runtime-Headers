// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _RKRESPONSE_H
#define _RKRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _RKResponse : NSObject

@property (readonly) NSString *headword; // ivar: _headword
@property (readonly) NSString *speechAct; // ivar: _speechAct
@property (readonly) NSString *text; // ivar: _text
@property (readonly) NSUInteger type;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithSpeechAct:(id)arg0 headword:(id)arg1 text:(id)arg2 ;


@end


#endif