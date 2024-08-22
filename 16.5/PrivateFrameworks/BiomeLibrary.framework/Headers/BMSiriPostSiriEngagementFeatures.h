// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRIPOSTSIRIENGAGEMENTFEATURES_H
#define BMSIRIPOSTSIRIENGAGEMENTFEATURES_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriPostSiriEngagementFeatures : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIsConfirmInteraction; // ivar: _hasIsConfirmInteraction
@property (nonatomic) BOOL hasIsDisambiguateInteraction; // ivar: _hasIsDisambiguateInteraction
@property (nonatomic) BOOL hasIsPromptInteraction; // ivar: _hasIsPromptInteraction
@property (nonatomic) BOOL hasIsSiriCompleted; // ivar: _hasIsSiriCompleted
@property (nonatomic) BOOL hasIsUnsupportedPromptInteraction; // ivar: _hasIsUnsupportedPromptInteraction
@property (nonatomic) BOOL hasIsUserAbandoned; // ivar: _hasIsUserAbandoned
@property (nonatomic) BOOL hasIsUserCancelled; // ivar: _hasIsUserCancelled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConfirmInteraction; // ivar: _isConfirmInteraction
@property (readonly, nonatomic) BOOL isDisambiguateInteraction; // ivar: _isDisambiguateInteraction
@property (readonly, nonatomic) BOOL isPromptInteraction; // ivar: _isPromptInteraction
@property (readonly, nonatomic) BOOL isSiriCompleted; // ivar: _isSiriCompleted
@property (readonly, nonatomic) BOOL isUnsupportedPromptInteraction; // ivar: _isUnsupportedPromptInteraction
@property (readonly, nonatomic) BOOL isUserAbandoned; // ivar: _isUserAbandoned
@property (readonly, nonatomic) BOOL isUserCancelled; // ivar: _isUserCancelled
@property (readonly) Class superclass;
@property (readonly, nonatomic) int taskSuccess; // ivar: _taskSuccess


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTaskSuccess:(int)arg0 isUserAbandoned:(id)arg1 isUserCancelled:(id)arg2 isSiriCompleted:(id)arg3 isPromptInteraction:(id)arg4 isConfirmInteraction:(id)arg5 isDisambiguateInteraction:(id)arg6 isUnsupportedPromptInteraction:(id)arg7 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif