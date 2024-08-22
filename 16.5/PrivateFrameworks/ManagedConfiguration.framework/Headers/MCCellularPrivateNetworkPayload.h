// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCCELLULARPRIVATENETWORKPAYLOAD_H
#define MCCELLULARPRIVATENETWORKPAYLOAD_H

@class NSString, NSArray;


#import "MCPayload.h"

@interface MCCellularPrivateNetworkPayload : MCPayload

@property (nonatomic) BOOL cellularDataPreferred; // ivar: _cellularDataPreferred
@property (retain, nonatomic) NSString *dataSetName; // ivar: _dataSetName
@property (retain, nonatomic) NSArray *geofenceList; // ivar: _geofenceList
@property (retain, nonatomic) NSString *versionNumber; // ivar: _versionNumber


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)_checkForValidContents:(id)arg0 outError:(*id)arg1 ;
-(id)_validationErrorType:(NSInteger)arg0 forInvalidKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)title;
-(void)_finishInitializationWithContents:(id)arg0 ;


@end


#endif