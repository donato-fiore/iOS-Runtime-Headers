// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITMATCHINFO_H
#define BIOMETRICKITMATCHINFO_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BiometricKitMatchInfo : NSObject

@property (retain, nonatomic) NSDictionary *details; // ivar: _details
@property (retain, nonatomic) NSArray *topology; // ivar: _topology


-(id)init;
-(void)dealloc;


@end


#endif