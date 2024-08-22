// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCONTEXTUALUNDERSTANDINGPHYSICALSOCIALPERSON_H
#define BMCONTEXTUALUNDERSTANDINGPHYSICALSOCIALPERSON_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMContextualUnderstandingPhysicalSocialPerson : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *cnContactID; // ivar: _cnContactID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unknownPersonID; // ivar: _unknownPersonID


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 phoneNumber:(id)arg1 emailAddress:(id)arg2 cnContactID:(id)arg3 unknownPersonID:(id)arg4 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif