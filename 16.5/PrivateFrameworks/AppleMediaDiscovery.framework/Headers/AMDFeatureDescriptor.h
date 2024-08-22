// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDFEATUREDESCRIPTOR_H
#define AMDFEATUREDESCRIPTOR_H

@class NSString, NSMutableArray, NSDictionary, NSFetchRequest, NSArray, NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AMDFeatureDescriptor : NSObject

@property (retain, nonatomic) NSString *aggregatedProperty; // ivar: _aggregatedProperty
@property (retain, nonatomic) NSMutableArray *aggregatedPropertyList; // ivar: _aggregatedPropertyList
@property (retain, nonatomic) NSObject *defaultJoinValue; // ivar: _defaultJoinValue
@property (retain, nonatomic) NSDictionary *defaultJoinValueDict; // ivar: _defaultJoinValueDict
@property (nonatomic) BOOL doOuterJoin; // ivar: _doOuterJoin
@property (retain, nonatomic) NSString *featureName; // ivar: _featureName
@property (retain, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (retain, nonatomic) NSArray *joinRequiredColumns; // ivar: _joinRequiredColumns
@property (retain, nonatomic) NSString *joinTable; // ivar: _joinTable
@property (retain, nonatomic) NSString *joinTableDomain; // ivar: _joinTableDomain
@property (nonatomic) NSString *joinType; // ivar: _joinType
@property (retain, nonatomic) NSString *keyProperty; // ivar: _keyProperty
@property (retain, nonatomic) NSNumber *maxRecords; // ivar: _maxRecords
@property (retain, nonatomic) NSMutableDictionary *propertyDict; // ivar: _propertyDict
@property (retain, nonatomic) NSString *sortKey; // ivar: _sortKey
@property (retain, nonatomic) NSNumber *sortOrder; // ivar: _sortOrder
@property (retain, nonatomic) NSString *version; // ivar: _version


+(id)getDataType:(id)arg0 ;
-(BOOL)checkJoinParameters;
-(id)getFeature:(*id)arg0 ;
-(id)getFeatureData:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 withUserId:(id)arg1 featureName:(id)arg2 ;
-(id)initWithDictionaryV2:(id)arg0 withUserId:(id)arg1 featureName:(id)arg2 withDomain:(id)arg3 ;
-(id)performInnerJoin:(id)arg0 ;
-(id)performOuterJoin:(id)arg0 ;
-(id)prepareArrayResult:(id)arg0 ;
-(id)prepareDictionaryResult:(id)arg0 ;
-(id)prepareResult:(id)arg0 ;
-(id)sort:(id)arg0 ;
-(id)transformTPDataForJoin:(id)arg0 ;
-(void)outerJoin:(id)arg0 ;


@end


#endif