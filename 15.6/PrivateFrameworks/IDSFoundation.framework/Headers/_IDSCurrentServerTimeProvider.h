// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IDSCURRENTSERVERTIMEPROVIDER_H
#define _IDSCURRENTSERVERTIMEPROVIDER_H

@protocol IDSCurrentServerTimeProvider;

#import <Foundation/Foundation.h>


@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>



@property (readonly, nonatomic) id *apsConnection; // ivar: _apsConnection


-(BOOL)isAccurate;
-(NSUInteger)serverTimeInNanoSeconds;
-(id)init;


@end


#endif