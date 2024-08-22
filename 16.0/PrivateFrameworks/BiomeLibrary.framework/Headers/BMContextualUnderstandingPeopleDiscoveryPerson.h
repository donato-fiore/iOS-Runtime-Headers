// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCONTEXTUALUNDERSTANDINGPEOPLEDISCOVERYPERSON_H
#define BMCONTEXTUALUNDERSTANDINGPEOPLEDISCOVERYPERSON_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMContextualUnderstandingPeopleDiscoveryPerson : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int activityLevel; // ivar: _activityLevel
@property (readonly, nonatomic) NSString *contactID; // ivar: _contactID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) BOOL hasActivityLevel; // ivar: _hasActivityLevel
@property (nonatomic) BOOL hasFlags; // ivar: _hasFlags
@property (nonatomic) BOOL hasProximity; // ivar: _hasProximity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int proximity; // ivar: _proximity
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithContactID:(id)arg0 identifier:(id)arg1 name:(id)arg2 flags:(id)arg3 activityLevel:(id)arg4 proximity:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif