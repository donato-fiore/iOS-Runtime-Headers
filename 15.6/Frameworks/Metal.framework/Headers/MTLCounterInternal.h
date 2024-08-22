// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOUNTERINTERNAL_H
#define MTLCOUNTERINTERNAL_H

@class NSString;
@protocol MTLCounter;

#import <Foundation/Foundation.h>


@interface MTLCounterInternal : NSObject <MTLCounter>

 {
    NSString *_description;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithName:(id)arg0 description:(id)arg1 ;
-(void)dealloc;


@end


#endif