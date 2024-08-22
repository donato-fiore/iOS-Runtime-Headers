// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRSEXTRACTIONFAILUREINFO_H
#define HDHRSEXTRACTIONFAILUREINFO_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSExtractionFailureInfo : NSObject <NSSecureCoding>

 {
    NSMutableArray *_failureRecords;
}


@property (readonly, copy, nonatomic) NSArray *failureRecords;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addFailureRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif