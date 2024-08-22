// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPEOPLESUGGESTERSIRINIRANKEDSUGGESTION_H
#define BMPEOPLESUGGESTERSIRINIRANKEDSUGGESTION_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMPeopleSuggesterSiriNIRankedSuggestion : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *contactFamilyName; // ivar: _contactFamilyName
@property (readonly, nonatomic) NSString *contactGivenName; // ivar: _contactGivenName
@property (readonly, nonatomic) NSString *contactId; // ivar: _contactId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasRank; // ivar: _hasRank
@property (nonatomic) BOOL hasScore; // ivar: _hasScore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (readonly, nonatomic) int rank; // ivar: _rank
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithContactId:(id)arg0 contactGivenName:(id)arg1 contactFamilyName:(id)arg2 score:(id)arg3 rank:(id)arg4 modelName:(id)arg5 modelVersion:(id)arg6 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif