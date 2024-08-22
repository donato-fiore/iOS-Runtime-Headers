// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDISCOVERABILITYSIGNALS_H
#define BMDISCOVERABILITYSIGNALS_H

@class BMEventBase, NSString, NSData;
@protocol BMStoreData;



@interface BMDiscoverabilitySignals : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *userInfo; // ivar: _userInfo


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithContentIdentifier:(id)arg0 context:(id)arg1 osBuild:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif