// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIRIANNOTATEDENTITYGROUPIDENTIFIER_H
#define BMSIRIANNOTATEDENTITYGROUPIDENTIFIER_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriAnnotatedEntityGroupIdentifier : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (nonatomic) BOOL hasSeq; // ivar: _hasSeq
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int seq; // ivar: _seq
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithGroupID:(id)arg0 seq:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif