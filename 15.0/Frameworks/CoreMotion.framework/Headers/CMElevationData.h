// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMELEVATIONDATA_H
#define CMELEVATIONDATA_H

@class NSUUID, NSDate, NSString;
@protocol SRSampling, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMElevationData : NSObject <SRSampling, NSSecureCoding, NSCopying>

 {
    NSUInteger fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSUInteger fElevationAscended;
    NSUInteger fElevationDescended;
    NSInteger fSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger elevationAscended;
@property (readonly, nonatomic) NSUInteger elevationDescended;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger recordId;
@property (readonly, nonatomic) NSInteger source;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)sourceName:(NSInteger)arg0 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignificantElevationSample:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 elevationAscended:(NSUInteger)arg2 elevationDescended:(NSUInteger)arg3 source:(NSInteger)arg4 recordId:(NSUInteger)arg5 sourceId:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif