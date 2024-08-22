// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKPLAYERMEDIAITEMCHANGEEVENTUSERINFO_H
#define IKPLAYERMEDIAITEMCHANGEEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerMediaItemChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithReason:(NSInteger)arg0 ;


@end


#endif