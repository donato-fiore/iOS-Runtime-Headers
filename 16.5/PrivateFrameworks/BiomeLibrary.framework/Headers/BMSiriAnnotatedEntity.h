// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRIANNOTATEDENTITY_H
#define BMSIRIANNOTATEDENTITY_H

@class BMEventBase, NSString, NSArray, NSData;
@protocol BMStoreData;


#import "BMSiriAnnotatedEntityGroupIdentifier.h"

@interface BMSiriAnnotatedEntity : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, nonatomic) NSArray *annotations; // ivar: _annotations
@property (readonly, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *dataType; // ivar: _dataType
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMSiriAnnotatedEntityGroupIdentifier *group; // ivar: _group
@property (nonatomic) BOOL hasSaliencyComputedAt; // ivar: _hasSaliencyComputedAt
@property (nonatomic) BOOL hasSaliencyScore; // ivar: _hasSaliencyScore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger saliencyComputedAt; // ivar: _saliencyComputedAt
@property (readonly, nonatomic) CGFloat saliencyScore; // ivar: _saliencyScore
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *usoEntity; // ivar: _usoEntity


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithID:(id)arg0 appBundleID:(id)arg1 usoEntity:(id)arg2 dataType:(id)arg3 data:(id)arg4 group:(id)arg5 annotations:(id)arg6 saliencyScore:(id)arg7 saliencyComputedAt:(id)arg8 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif