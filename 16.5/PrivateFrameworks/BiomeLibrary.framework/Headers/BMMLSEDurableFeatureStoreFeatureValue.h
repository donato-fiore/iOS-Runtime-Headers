// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSEDURABLEFEATURESTOREFEATUREVALUE_H
#define BMMLSEDURABLEFEATURESTOREFEATUREVALUE_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMMLSEDurableFeatureStoreFeatureValueHistogram.h"

@interface BMMLSEDurableFeatureStoreFeatureValue : BMEventBase <BMStoreData>



@property (readonly, nonatomic) BOOL boolValue; // ivar: _boolValue
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasBoolValue; // ivar: _hasBoolValue
@property (nonatomic) BOOL hasDoubleValue; // ivar: _hasDoubleValue
@property (nonatomic) BOOL hasIntValue; // ivar: _hasIntValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMMLSEDurableFeatureStoreFeatureValueHistogram *histogramValue; // ivar: _histogramValue
@property (readonly, nonatomic) unsigned int intValue; // ivar: _intValue
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIntValue:(id)arg0 doubleValue:(id)arg1 stringValue:(id)arg2 boolValue:(id)arg3 histogramValue:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif