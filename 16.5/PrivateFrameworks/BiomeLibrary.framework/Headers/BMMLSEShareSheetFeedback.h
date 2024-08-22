// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSESHARESHEETFEEDBACK_H
#define BMMLSESHARESHEETFEEDBACK_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMMLSEShareSheetFeedback : BMEventBase <BMStoreData>



@property (readonly, nonatomic) BOOL airdropPeopleSuggestionShown; // ivar: _airdropPeopleSuggestionShown
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *engagementIdentifier; // ivar: _engagementIdentifier
@property (readonly, nonatomic) int engagementType; // ivar: _engagementType
@property (nonatomic) BOOL hasAirdropPeopleSuggestionShown; // ivar: _hasAirdropPeopleSuggestionShown
@property (nonatomic) BOOL hasVisibleAppSuggestionCount; // ivar: _hasVisibleAppSuggestionCount
@property (nonatomic) BOOL hasVisiblePeopleSuggestionCount; // ivar: _hasVisiblePeopleSuggestionCount
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int visibleAppSuggestionCount; // ivar: _visibleAppSuggestionCount
@property (readonly, nonatomic) unsigned int visiblePeopleSuggestionCount; // ivar: _visiblePeopleSuggestionCount


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 engagementType:(int)arg1 engagementIdentifier:(id)arg2 visiblePeopleSuggestionCount:(id)arg3 visibleAppSuggestionCount:(id)arg4 airdropPeopleSuggestionShown:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif