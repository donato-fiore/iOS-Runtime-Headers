// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMWALLETPAYMENTSCOMMERCESEARCH_H
#define BMWALLETPAYMENTSCOMMERCESEARCH_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMWalletPaymentsCommerceSearch : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTagClickDate; // ivar: _hasTagClickDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int passType; // ivar: _passType
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tagClickDate; // ivar: _tagClickDate
@property (readonly, nonatomic) int tagSource; // ivar: _tagSource
@property (readonly, nonatomic) int tagType; // ivar: _tagType


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTagSource:(int)arg0 tagType:(int)arg1 passType:(int)arg2 tagClickDate:(id)arg3 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif