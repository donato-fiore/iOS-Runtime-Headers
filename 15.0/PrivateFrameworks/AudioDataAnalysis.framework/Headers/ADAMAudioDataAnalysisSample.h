// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADAMAUDIODATAANALYSISSAMPLE_H
#define ADAMAUDIODATAANALYSISSAMPLE_H

@class NSNumber, NSDateInterval, NSDictionary, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ADAMAudioDataAnalysisSample : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSNumber *data; // ivar: data
@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: dateInterval
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: metadata
@property (readonly, nonatomic) unsigned int type; // ivar: type
@property (readonly, nonatomic) NSUUID *uuid; // ivar: uuid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initAudioSampleWithType:(unsigned int)arg0 data:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif