// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINTELLIGENCEPLATFORMMESSAGETERMSTERMCOUNTTERM_H
#define BMINTELLIGENCEPLATFORMMESSAGETERMSTERMCOUNTTERM_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMIntelligencePlatformMessageTermsTermCountTerm : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTermID; // ivar: _hasTermID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger termID; // ivar: _termID
@property (readonly, nonatomic) NSString *termString; // ivar: _termString
@property (readonly, nonatomic) int termType; // ivar: _termType


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTermType:(int)arg0 termString:(id)arg1 termID:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif