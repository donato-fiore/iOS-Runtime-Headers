// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPPOSITION_H
#define MSPPOSITION_H

@class NSString, NSArray, NSData;
@protocol NSSecureCoding, NSCopying, MSPPositionSignpost;

#import <Foundation/Foundation.h>


@interface MSPPosition : NSObject <NSSecureCoding, NSCopying, MSPPositionSignpost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=_pathComponents) NSArray *pathComponents; // ivar: _pathComponents
@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly) Class superclass;


+(BOOL)_hasSpaceForInsertionAtDepth:(NSUInteger)arg0 betweenEarlierPosition:(id)arg1 andLaterPosition:(id)arg2 clientIdentifier:(id)arg3 ;
+(BOOL)_randBoolForStrategy:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)_strategyForAllocationAtDepth:(NSUInteger)arg0 ;
+(id)_pathComponentsForSignpost:(id)arg0 ;
+(id)finalPositionWithClientIdentifier:(id)arg0 ;
+(id)finalSignpostWithClientIdentifier:(id)arg0 ;
+(id)initialPositionWithClientIdentifier:(id)arg0 ;
+(id)initialSignpostWithClientIdentifier:(id)arg0 ;
+(id)positionBetweenPosition:(id)arg0 andPosition:(id)arg1 clientIdentifier:(id)arg2 ;
+(id)positionBetweenSignpost:(id)arg0 andSignpost:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)_isFinal;
-(BOOL)_isInitial;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)_addingDistanceAtEqualDepth:(NSInteger)arg0 clientIdentifier:(id)arg1 ;
-(id)_initWithIndexes:(id)arg0 originIdentifier:(id)arg1 ;
-(id)_initWithPathComponents:(id)arg0 ;
-(id)_positionByTruncatingOrExtendingToDepth:(NSUInteger)arg0 clientIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif