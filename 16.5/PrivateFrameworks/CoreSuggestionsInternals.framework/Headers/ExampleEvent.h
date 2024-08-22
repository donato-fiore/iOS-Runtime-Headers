// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXAMPLEEVENT_H
#define EXAMPLEEVENT_H

@class NSString, NSData;
@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface ExampleEvent : NSObject <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion; // ivar: _dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSData *foo; // ivar: _foo
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithFoo:(id)arg0 ;
-(id)serialize;


@end


#endif