// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDISCOVERABILITYUSAGE_H
#define BMDISCOVERABILITYUSAGE_H

@class BMEventBase, NSData, NSString;
@protocol BMStoreData;



@interface BMDiscoverabilityUsage : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSData *analyticsEvent; // ivar: _analyticsEvent
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, nonatomic) int contentType; // ivar: _contentType
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *eligibleContext; // ivar: _eligibleContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int ineligibleReason; // ivar: _ineligibleReason
@property (readonly, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithContentIdentifier:(id)arg0 bundleID:(id)arg1 contentType:(int)arg2 context:(id)arg3 eligibleContext:(id)arg4 ineligibleReason:(int)arg5 osBuild:(id)arg6 state:(int)arg7 analyticsEvent:(id)arg8 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif