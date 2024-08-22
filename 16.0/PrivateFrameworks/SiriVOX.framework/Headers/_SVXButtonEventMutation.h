// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXBUTTONEVENTMUTATION_H
#define _SVXBUTTONEVENTMUTATION_H

@class NSString;
@protocol SVXButtonEventMutating;

#import <Foundation/Foundation.h>

#import "SVXButtonEvent.h"

@interface _SVXButtonEventMutation : NSObject <SVXButtonEventMutating>

 {
    SVXButtonEvent *_baseModel;
    NSInteger _type;
    NSUInteger _timestamp;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;
-(void)setType:(NSInteger)arg0 ;


@end


#endif