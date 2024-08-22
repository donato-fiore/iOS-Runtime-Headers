// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRISERVICE_H
#define BMSIRISERVICE_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriService : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int dismissalReason; // ivar: _dismissalReason
@property (nonatomic) BOOL hasUnintended; // ivar: _hasUnintended
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int requestSource; // ivar: _requestSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL unintended; // ivar: _unintended


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDismissalReason:(int)arg0 unintended:(id)arg1 requestSource:(int)arg2 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif