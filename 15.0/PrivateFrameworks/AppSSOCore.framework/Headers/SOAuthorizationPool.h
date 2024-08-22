// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOAUTHORIZATIONPOOL_H
#define SOAUTHORIZATIONPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}




-(id)init;
-(void)addAuthorization:(id)arg0 delegate:(id)arg1 ;
-(void)removeAuthorization:(id)arg0 ;


@end


#endif