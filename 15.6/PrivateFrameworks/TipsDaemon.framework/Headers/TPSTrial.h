// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSTRIAL_H
#define TPSTRIAL_H

@protocol TPSTrialUpdateHandler;

#import <Foundation/Foundation.h>


@interface TPSTrial : NSObject

@property (weak, nonatomic) NSObject<TPSTrialUpdateHandler> *updateHandler; // ivar: _updateHandler


-(id)clientObject;
-(id)initWithUpdateHandler:(id)arg0 ;
-(id)levelForFactor:(id)arg0 ;


@end


#endif