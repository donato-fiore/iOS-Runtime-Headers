// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFBASEFILTERDATACONSUMER_H
#define MFBASEFILTERDATACONSUMER_H

@class NSArray, NSString;
@protocol MFDataConsumer;

#import <Foundation/Foundation.h>


@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer>



@property (readonly, nonatomic) NSArray *consumers; // ivar: _consumers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSerialAppend) BOOL serialAppend; // ivar: _serialAppend
@property (readonly) Class superclass;


+(id)filterWithConsumer:(id)arg0 ;
+(id)filterWithConsumers:(id)arg0 ;
-(NSInteger)appendData:(id)arg0 ;
-(id)initWithConsumer:(id)arg0 ;
-(id)initWithConsumers:(id)arg0 ;
-(void)done;


@end


#endif