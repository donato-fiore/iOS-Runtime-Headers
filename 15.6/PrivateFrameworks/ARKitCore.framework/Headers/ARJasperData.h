// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARJASPERDATA_H
#define ARJASPERDATA_H

@class NSString;
@protocol ARData;

#import <Foundation/Foundation.h>


@interface ARJasperData : NSObject <ARData>



@property (nonatomic) *__CVBuffer dataBuffer; // ivar: _dataBuffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithBuffer:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif