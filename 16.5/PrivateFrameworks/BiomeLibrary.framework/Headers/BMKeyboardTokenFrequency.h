// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMKEYBOARDTOKENFREQUENCY_H
#define BMKEYBOARDTOKENFREQUENCY_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMKeyboardTokenFrequency : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tokenFrequencies; // ivar: _tokenFrequencies
@property (readonly, nonatomic) int tokenType; // ivar: _tokenType


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTokenFrequencies:(id)arg0 locale:(id)arg1 tokenType:(int)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif