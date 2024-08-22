// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMRESOLUTIONTOKEN_H
#define REMRESOLUTIONTOKEN_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying, REMNonceGenerating;

#import <Foundation/Foundation.h>


@interface REMResolutionToken : NSObject <NSSecureCoding, NSCopying, REMNonceGenerating>



@property (nonatomic) NSInteger counter; // ivar: _counter
@property (nonatomic) CGFloat modificationTime; // ivar: _modificationTime
@property (retain, nonatomic) NSUUID *replicaID; // ivar: _replicaID


+(BOOL)supportsSecureCoding;
+(id)resolutionTokenWithJSONObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)generateNonce;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCounter:(NSInteger)arg0 modificationTime:(CGFloat)arg1 replicaID:(id)arg2 ;
-(id)initWithDefaultValue;
-(void)encodeWithCoder:(id)arg0 ;
-(void)update;


@end


#endif