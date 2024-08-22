// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADATTRIBUTION_H
#define ADATTRIBUTION_H


#import <Foundation/Foundation.h>


@interface ADAttribution : NSObject

@property (nonatomic) BOOL hasCompletedResponse; // ivar: _hasCompletedResponse
@property (nonatomic) unsigned char numRetries; // ivar: _numRetries


+(id)sharedInstance;
-(id)init;
-(void)initiateRequestOnConnection:(id)arg0 withBlock:(id)arg1 ;
-(void)requestAttributionDetailsWithBlock:(id)arg0 ;
-(void)setServerToTest:(NSInteger)arg0 ;
-(void)setStocksAdEnabled:(BOOL)arg0 ;


@end


#endif