// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRPRIMER_H
#define SPRPRIMER_H


#import <Foundation/Foundation.h>


@interface SPRPrimer : NSObject {
    ? urlDigest;
}




+(id)shared;
-(BOOL)configureWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)isRequired;
-(id)getEnvironment;
-(id)init;


@end


#endif