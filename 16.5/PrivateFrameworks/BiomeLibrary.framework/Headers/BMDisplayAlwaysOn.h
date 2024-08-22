// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDISPLAYALWAYSON_H
#define BMDISPLAYALWAYSON_H

@class BMEventBase, NSArray, NSString;
@protocol BMStoreData;



@interface BMDisplayAlwaysOn : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSArray *blockingPolicies; // ivar: _blockingPolicies
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int resolvedState; // ivar: _resolvedState
@property (readonly) Class superclass;
@property (readonly, nonatomic) int userSetState; // ivar: _userSetState


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithUserSetState:(int)arg0 resolvedState:(int)arg1 blockingPolicies:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif