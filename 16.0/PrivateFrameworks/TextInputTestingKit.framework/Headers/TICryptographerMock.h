// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TICRYPTOGRAPHERMOCK_H
#define TICRYPTOGRAPHERMOCK_H

@class NSString;
@protocol TICryptographing;

#import <Foundation/Foundation.h>


@interface TICryptographerMock : NSObject <TICryptographing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)stringDigestForName:(id)arg0 ;


@end


#endif