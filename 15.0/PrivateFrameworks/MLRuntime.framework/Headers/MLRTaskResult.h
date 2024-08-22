// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLRTASKRESULT_H
#define MLRTASKRESULT_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface MLRTaskResult : NSObject

@property (readonly, nonatomic) NSDictionary *JSONResult; // ivar: _JSONResult
@property (readonly, nonatomic) NSData *vector; // ivar: _vector


-(id)description;
-(id)initWithJSONResult:(id)arg0 unprivatizedVector:(id)arg1 ;


@end


#endif