// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCLUSTER_H
#define VNCLUSTER_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNCluster : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger clusterId; // ivar: _clusterId
@property (retain, nonatomic) NSArray *objects; // ivar: _objects
@property (retain, nonatomic) NSDictionary *representativenessById; // ivar: _representativenessById
@property (nonatomic) BOOL shouldUpdateRepresentative; // ivar: _shouldUpdateRepresentative
@property (retain, nonatomic) NSArray *suggestedIdsForRepresentative; // ivar: _suggestedIdsForRepresentative
@property (nonatomic) NSUInteger totalObjectCount; // ivar: _totalObjectCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif