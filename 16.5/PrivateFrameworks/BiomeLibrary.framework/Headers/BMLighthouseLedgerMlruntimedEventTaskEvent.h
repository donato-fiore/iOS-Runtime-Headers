// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLIGHTHOUSELEDGERMLRUNTIMEDEVENTTASKEVENT_H
#define BMLIGHTHOUSELEDGERMLRUNTIMEDEVENTTASKEVENT_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMLighthouseLedgerMlruntimedEventTaskEvent : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode; // ivar: _hasErrorCode
@property (nonatomic) BOOL hasSucceeded; // ivar: _hasSucceeded
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithSucceeded:(id)arg0 errorDomain:(id)arg1 errorCode:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif