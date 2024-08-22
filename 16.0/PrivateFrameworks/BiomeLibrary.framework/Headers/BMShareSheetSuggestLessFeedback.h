// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSHARESHEETSUGGESTLESSFEEDBACK_H
#define BMSHARESHEETSUGGESTLESSFEEDBACK_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMShareSheetSuggestLessFeedback : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *contactID; // ivar: _contactID
@property (readonly, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *derivedIntentIdentifier; // ivar: _derivedIntentIdentifier
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 conversationIdentifier:(id)arg1 derivedIntentIdentifier:(id)arg2 handle:(id)arg3 contactID:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif