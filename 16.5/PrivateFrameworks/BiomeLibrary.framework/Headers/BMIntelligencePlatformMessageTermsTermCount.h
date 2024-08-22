// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINTELLIGENCEPLATFORMMESSAGETERMSTERMCOUNT_H
#define BMINTELLIGENCEPLATFORMMESSAGETERMSTERMCOUNT_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMIntelligencePlatformMessageTermsTermCountTerm.h"

@interface BMIntelligencePlatformMessageTermsTermCount : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTermCount; // ivar: _hasTermCount
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMIntelligencePlatformMessageTermsTermCountTerm *term; // ivar: _term
@property (readonly, nonatomic) int termCount; // ivar: _termCount


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTerm:(id)arg0 termCount:(id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif