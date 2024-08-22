// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPREFETCHFLOORREQUEST_H
#define CLPREFETCHFLOORREQUEST_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLPrefetchFloorRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowCellularDownload; // ivar: _allowCellularDownload
@property (retain, nonatomic) NSString *floorUuid; // ivar: _floorUuid
@property (nonatomic) BOOL hasCompleteFloor; // ivar: _hasCompleteFloor
@property (nonatomic) NSInteger locationContext; // ivar: _locationContext
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) NSDate *relevancy; // ivar: _relevancy
@property (retain, nonatomic) NSString *venueUuid; // ivar: _venueUuid


+(BOOL)supportsSecureCoding;
+(id)prefetchRequestForFloor:(id)arg0 inVenue:(id)arg1 lastRelevant:(id)arg2 locationContext:(NSInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)floorUid;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFloor:(id)arg0 inVenue:(id)arg1 lastRelevant:(id)arg2 hasCompleteFloor:(BOOL)arg3 allowCellularDownload:(BOOL)arg4 locationContext:(NSInteger)arg5 ;
-(id)initWithFloor:(id)arg0 inVenue:(id)arg1 lastRelevant:(id)arg2 hasCompleteFloor:(BOOL)arg3 allowCellularDownload:(BOOL)arg4 locationContext:(NSInteger)arg5 priority:(NSInteger)arg6 ;
-(id)initWithFloor:(id)arg0 inVenue:(id)arg1 lastRelevant:(id)arg2 hasCompleteFloor:(BOOL)arg3 allowCellularDownload:(BOOL)arg4 locationContext:(NSInteger)arg5 ranking:(NSInteger)arg6 ;
-(id)initWithFloor:(id)arg0 inVenue:(id)arg1 lastRelevant:(id)arg2 locationContext:(NSInteger)arg3 ;
-(id)initWithFloor:(id)arg0 inVenue:(id)arg1 lastRelevant:(id)arg2 locationContext:(NSInteger)arg3 priority:(NSInteger)arg4 ;
-(id)initWithFloor:(id)arg0 inVenue:(id)arg1 lastRelevant:(id)arg2 locationContext:(NSInteger)arg3 ranking:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setFloorUid:(id)arg0 ;


@end


#endif