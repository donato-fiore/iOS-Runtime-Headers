// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURESPONSE_H
#define NURESPONSE_H

@class NSError;

#import <Foundation/Foundation.h>


@interface NUResponse : NSObject

@property (retain) NSError *error; // ivar: _error
@property (retain) id *result; // ivar: _result


-(id)description;
-(id)init;
-(id)initWithError:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(id)result:(*id)arg0 ;


@end


#endif