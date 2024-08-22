// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VEKRESULT_H
#define VEKRESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VEKResult : NSObject

@property (retain) NSDictionary *results; // ivar: _results


-(id)description;
-(id)initWithResults:(id)arg0 ;
-(void)appendResult:(id)arg0 ;


@end


#endif