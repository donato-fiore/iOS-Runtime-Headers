// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTGEOFENCEPROFILE_H
#define CTGEOFENCEPROFILE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTGeofenceProfile : NSObject <NSSecureCoding>



@property (nonatomic) BOOL cellularDataPreferred; // ivar: _cellularDataPreferred
@property (retain, nonatomic) NSString *dataSetName; // ivar: _dataSetName
@property (retain, nonatomic) NSArray *geofenceList; // ivar: _geofenceList
@property (retain, nonatomic) NSString *versionNumber; // ivar: _versionNumber


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif