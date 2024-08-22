// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPROCESSCRASHEXCEPTION_H
#define BMPROCESSCRASHEXCEPTION_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMProcessCrashException : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *codes; // ivar: _codes
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *signal; // ivar: _signal
@property (readonly, nonatomic) NSString *subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithCodes:(id)arg0 type:(id)arg1 signal:(id)arg2 subtype:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif