// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPASYNCPLAYERDELEGATEOPERATION_H
#define TVPASYNCPLAYERDELEGATEOPERATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface TVPAsyncPlayerDelegateOperation : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSNumber *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;


@end


#endif