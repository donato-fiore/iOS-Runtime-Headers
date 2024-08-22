// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXAPPINFO_H
#define _ATXAPPINFO_H

@class NSNumber, NSString, NSDate, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _ATXAppInfo : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *app2VecCluster; // ivar: _app2VecCluster
@property (copy, nonatomic) NSNumber *averageSecondsBetweenLaunches; // ivar: _averageSecondsBetweenLaunches
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) NSNumber *genreId; // ivar: _genreId
@property (copy, nonatomic) NSDate *installDate; // ivar: _installDate
@property (nonatomic) BOOL isEnterpriseApp; // ivar: _isEnterpriseApp
@property (nonatomic) BOOL isExtension; // ivar: _isExtension
@property (copy, nonatomic) NSDate *lastLaunch; // ivar: _lastLaunch
@property (copy, nonatomic) NSDate *lastSpotlightLaunch; // ivar: _lastSpotlightLaunch
@property (copy, nonatomic) NSNumber *medianSecondsBetweenLaunches; // ivar: _medianSecondsBetweenLaunches
@property (copy, nonatomic) NSArray *subGenreIds; // ivar: _subGenreIds


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBundleId:(id)arg0 isExtension:(BOOL)arg1 isEnterpriseApp:(BOOL)arg2 installDate:(id)arg3 lastLaunch:(id)arg4 lastSpotlightLaunch:(id)arg5 averageSecondsBetweenLaunches:(id)arg6 medianSecondsBetweenLaunches:(id)arg7 genreId:(id)arg8 subGenreIds:(id)arg9 app2VecCluster:(id)arg10 ;


@end


#endif