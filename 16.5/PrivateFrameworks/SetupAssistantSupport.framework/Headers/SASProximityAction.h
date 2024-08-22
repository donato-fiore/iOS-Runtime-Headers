// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPROXIMITYACTION_H
#define SASPROXIMITYACTION_H


#import <Foundation/Foundation.h>


@interface SASProximityAction : NSObject



+(NSUInteger)actionID;
+(id)actionFromDictionary:(id)arg0 ;
-(BOOL)hasResponse;
-(id)requestPayload;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg0 ;


@end


#endif