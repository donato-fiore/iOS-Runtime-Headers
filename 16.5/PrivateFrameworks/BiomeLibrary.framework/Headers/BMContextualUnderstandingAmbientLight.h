// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMCONTEXTUALUNDERSTANDINGAMBIENTLIGHT_H
#define BMCONTEXTUALUNDERSTANDINGAMBIENTLIGHT_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMContextualUnderstandingAmbientLight : BMEventBase <BMStoreData>



@property (readonly, nonatomic) CGFloat ambientLightColorComponent0; // ivar: _ambientLightColorComponent0
@property (readonly, nonatomic) CGFloat ambientLightColorComponent1; // ivar: _ambientLightColorComponent1
@property (readonly, nonatomic) CGFloat ambientLightColorComponent2; // ivar: _ambientLightColorComponent2
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAmbientLightColorComponent0; // ivar: _hasAmbientLightColorComponent0
@property (nonatomic) BOOL hasAmbientLightColorComponent1; // ivar: _hasAmbientLightColorComponent1
@property (nonatomic) BOOL hasAmbientLightColorComponent2; // ivar: _hasAmbientLightColorComponent2
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAmbientLightColorComponent0:(id)arg0 ambientLightColorComponent1:(id)arg1 ambientLightColorComponent2:(id)arg2 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif