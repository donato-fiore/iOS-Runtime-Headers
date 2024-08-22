// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPLAYBACKCUSTOMEVENTUSERINFO_H
#define TVPLAYBACKCUSTOMEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol TVPlaybackEventMarshaling;

#import <Foundation/Foundation.h>


@interface TVPlaybackCustomEventUserInfo : NSObject <TVPlaybackEventMarshaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expectsReturnValue; // ivar: _expectsReturnValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) id *returnValue; // ivar: _returnValue
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithProperties:(id)arg0 expectsReturnValue:(BOOL)arg1 ;
-(void)processReturnJSValue:(id)arg0 inContext:(id)arg1 ;


@end


#endif