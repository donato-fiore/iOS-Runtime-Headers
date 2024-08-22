// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMOMENTSEVENTDATA_H
#define BMMOMENTSEVENTDATA_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMMomentsEventDataEventBundle.h"
#import "BMMomentsEventDataEvent.h"

@interface BMMomentsEventData : BMEventBase <BMStoreData>



@property (readonly, nonatomic) BOOL IHAState; // ivar: _IHAState
@property (readonly, nonatomic) int age; // ivar: _age
@property (readonly, nonatomic) int ageRange; // ivar: _ageRange
@property (readonly, nonatomic) int biologicalSex; // ivar: _biologicalSex
@property (readonly, nonatomic) BMMomentsEventDataEventBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMMomentsEventDataEvent *event; // ivar: _event
@property (nonatomic) BOOL hasAge; // ivar: _hasAge
@property (nonatomic) BOOL hasIHAState; // ivar: _hasIHAState
@property (nonatomic) BOOL hasIsBundle; // ivar: _hasIsBundle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBundle; // ivar: _isBundle
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithEvent:(id)arg0 bundle:(id)arg1 isBundle:(id)arg2 IHAState:(id)arg3 age:(id)arg4 ageRange:(int)arg5 biologicalSex:(int)arg6 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif