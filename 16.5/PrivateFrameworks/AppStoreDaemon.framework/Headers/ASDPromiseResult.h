// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPROMISERESULT_H
#define ASDPROMISERESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface ASDPromiseResult : NSObject

@property (readonly) NSError *error; // ivar: _error
@property (readonly) id *value; // ivar: _value


+(id)resultWithError:(id)arg0 ;
+(id)resultWithValue:(id)arg0 ;
-(id)init;


@end


#endif