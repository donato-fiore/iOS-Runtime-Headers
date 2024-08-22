// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDFEATUREDESCRIPTOR_H
#define AMDFEATUREDESCRIPTOR_H

@class NSString, NSNumber, NSFetchRequest;

#import <Foundation/Foundation.h>


@interface AMDFeatureDescriptor : NSObject

@property (retain, nonatomic) NSString *aggregatedProperty; // ivar: _aggregatedProperty
@property (retain, nonatomic) NSNumber *defaultJoinValue; // ivar: _defaultJoinValue
@property (nonatomic) BOOL doOuterJoin; // ivar: _doOuterJoin
@property (retain, nonatomic) NSString *featureName; // ivar: _featureName
@property (retain, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (retain, nonatomic) NSString *keyProperty; // ivar: _keyProperty
@property (retain, nonatomic) NSNumber *maxRecords; // ivar: _maxRecords
@property (retain, nonatomic) NSNumber *sortOrder; // ivar: _sortOrder


+(id)getDataType:(id)arg0 ;
-(id)getFeature:(*id)arg0 ;
-(id)getFeatureData:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 withUserId:(id)arg1 featureName:(id)arg2 ;
-(id)prepareResult:(id)arg0 ;
-(id)sort:(id)arg0 ;
-(void)outerJoin:(id)arg0 ;


@end


#endif