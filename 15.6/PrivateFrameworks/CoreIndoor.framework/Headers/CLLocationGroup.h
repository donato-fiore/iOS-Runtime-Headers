// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLLOCATIONGROUP_H
#define CLLOCATIONGROUP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ECEFCoordinate.h"
#import "GeographicCoordinate.h"

@interface CLLocationGroup : NSObject {
    unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> vertices;
    vector<std::string, std::allocator<std::string>> _locationIds;
    set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> _wifiOnlyDownloadLocIdxs;
}


@property (readonly) ECEFCoordinate *centerECEF; // ivar: _centerECEF
@property (readonly) GeographicCoordinate *centerLatLon; // ivar: _centerLatLon
@property (readonly) NSString *groupId; // ivar: _groupId
@property (readonly) NSInteger locationContext; // ivar: _locationContext
@property ? locationIds;
@property (readonly) CGFloat tolerance; // ivar: _tolerance
@property ? wifiOnlyDownloadLocIdxs;


+(struct vector<std::string, std::allocator<std::string>> )stringVectorFromNSArray:(id)arg0 ;
+(void)storeAverage:(id)arg0 ofVertices:(id)arg1 ;
-(BOOL)allowCellularDownload:(NSUInteger)arg0 ;
-(CGFloat)distance:(id)arg0 ;
-(id)initWithGroupId:(id)arg0 locationIds:(id)arg1 center:(id)arg2 wifiOnlyDownloadLocIdxs:(*void)arg3 locationContext:(NSInteger)arg4 andTolerance:(CGFloat)arg5 ;


@end


#endif