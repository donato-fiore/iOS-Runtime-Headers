// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCONTEXTUALUNDERSTANDINGPHYSICALSOCIAL_H
#define BMCONTEXTUALUNDERSTANDINGPHYSICALSOCIAL_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMContextualUnderstandingPhysicalSocial : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *discoveredPeople; // ivar: _discoveredPeople
@property (readonly, nonatomic) CGFloat endTimeInSecondsSinceReferenceDate; // ivar: _endTimeInSecondsSinceReferenceDate
@property (nonatomic) BOOL hasEndTimeInSecondsSinceReferenceDate; // ivar: _hasEndTimeInSecondsSinceReferenceDate
@property (nonatomic) BOOL hasStartTimeInSecondsSinceReferenceDate; // ivar: _hasStartTimeInSecondsSinceReferenceDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, nonatomic) CGFloat startTimeInSecondsSinceReferenceDate; // ivar: _startTimeInSecondsSinceReferenceDate
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 discoveredPeople:(id)arg1 startTimeInSecondsSinceReferenceDate:(id)arg2 endTimeInSecondsSinceReferenceDate:(id)arg3 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif