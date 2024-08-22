// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASETARGETROOMACOUSTICPARAMETERS_H
#define PHASETARGETROOMACOUSTICPARAMETERS_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface PHASETargetRoomAcousticParameters : NSObject {
    NSMutableArray *_internalArray;
}


@property (readonly, nonatomic) NSArray *subbandParameters;


-(id)init;
-(id)initWithSubbandParameters:(id)arg0 ;


@end


#endif