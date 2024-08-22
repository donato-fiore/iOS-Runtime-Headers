// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PASAMPLETIMESERIESDATASTORE_H
#define PASAMPLETIMESERIESDATASTORE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SASampleStore.h"

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding>



@property (retain) SASampleStore *sampleStore; // ivar: _sampleStore


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleStore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif