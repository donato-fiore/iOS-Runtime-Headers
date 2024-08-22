// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBDISCOVERYSUMMARY_H
#define CBDISCOVERYSUMMARY_H

@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBDiscoverySummary : NSObject <CUXPCCodable>



@property (nonatomic) CGFloat scanTime; // ivar: _scanTime


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif