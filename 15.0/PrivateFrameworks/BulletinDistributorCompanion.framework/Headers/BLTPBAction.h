// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTPBACTION_H
#define BLTPBACTION_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "BLTPBAppearance.h"

@interface BLTPBAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activationMode; // ivar: _activationMode
@property (retain, nonatomic) BLTPBAppearance *appearance; // ivar: _appearance
@property (nonatomic) int behavior; // ivar: _behavior
@property (retain, nonatomic) NSData *behaviorParameters; // ivar: _behaviorParameters
@property (retain, nonatomic) NSData *behaviorParametersNulls; // ivar: _behaviorParametersNulls
@property (nonatomic) BOOL hasBehavior;
@property (readonly, nonatomic) BOOL hasBehaviorParameters;
@property (readonly, nonatomic) BOOL hasBehaviorParametersNulls;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLaunchURL;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *launchURL; // ivar: _launchURL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif