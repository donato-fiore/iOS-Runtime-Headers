// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCODEREQUEST_H
#define GEOCODEREQUEST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface GeocodeRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers


-(id)init;
-(void)addCompletionHandler:(id)arg0 ;


@end


#endif