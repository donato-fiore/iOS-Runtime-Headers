// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIACTIVATIONEVENTRECORD_H
#define TRIACTIVATIONEVENTRECORD_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIActivationEventRecord : NSObject <NSCopying>



@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *factorPackSetId; // ivar: _factorPackSetId
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (readonly, nonatomic) NSString *parentId; // ivar: _parentId
@property (readonly, nonatomic) NSString *regionCode; // ivar: _regionCode


+(id)recordWithParentId:(id)arg0 factorPackSetId:(id)arg1 deploymentId:(int)arg2 osBuild:(id)arg3 languageCode:(id)arg4 regionCode:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDeploymentId:(int)arg0 ;
-(id)copyWithReplacementFactorPackSetId:(id)arg0 ;
-(id)copyWithReplacementLanguageCode:(id)arg0 ;
-(id)copyWithReplacementOsBuild:(id)arg0 ;
-(id)copyWithReplacementParentId:(id)arg0 ;
-(id)copyWithReplacementRegionCode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithParentId:(id)arg0 factorPackSetId:(id)arg1 deploymentId:(int)arg2 osBuild:(id)arg3 languageCode:(id)arg4 regionCode:(id)arg5 ;


@end


#endif