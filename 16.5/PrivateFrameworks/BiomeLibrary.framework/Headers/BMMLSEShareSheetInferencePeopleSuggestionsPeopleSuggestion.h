// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSESHARESHEETINFERENCEPEOPLESUGGESTIONSPEOPLESUGGESTION_H
#define BMMLSESHARESHEETINFERENCEPEOPLESUGGESTIONSPEOPLESUGGESTION_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestion : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasRank; // ivar: _hasRank
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) unsigned int rank; // ivar: _rank
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *transportBundleId; // ivar: _transportBundleId


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 model:(id)arg1 transportBundleId:(id)arg2 rank:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif