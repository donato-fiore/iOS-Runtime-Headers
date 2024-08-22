// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTFAULTINGENCODER_H
#define GTFAULTINGENCODER_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTFaultingEncoder : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *cpuCallstackData; // ivar: _cpuCallstackData
@property (nonatomic) unsigned int cpuCallstackFramesNum; // ivar: _cpuCallstackFramesNum
@property (copy, nonatomic) NSString *metalLogMessage; // ivar: _metalLogMessage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif