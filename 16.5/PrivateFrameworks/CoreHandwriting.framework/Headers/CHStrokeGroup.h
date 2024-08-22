// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSTROKEGROUP_H
#define CHSTROKEGROUP_H

@class NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHEncodedStrokeIdentifier.h"

@interface CHStrokeGroup : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger ancestorIdentifier; // ivar: _ancestorIdentifier
@property (readonly, nonatomic) CGVector averageWritingOrientation;
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) NSInteger classification; // ivar: _classification
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *firstStrokeIdentifier; // ivar: _firstStrokeIdentifier
@property (readonly, nonatomic) CGPoint firstStrokeOrigin; // ivar: _firstStrokeOrigin
@property (readonly, nonatomic) CGFloat groupingConfidence; // ivar: _groupingConfidence
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *lastStrokeIdentifier; // ivar: _lastStrokeIdentifier
@property (readonly, nonatomic) NSString *strategyIdentifier; // ivar: _strategyIdentifier
@property (readonly, nonatomic) NSSet *strokeIdentifiers; // ivar: _strokeIdentifiers
@property (readonly, nonatomic) NSInteger uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)isStrokeGroupSet:(id)arg0 equivalentToStrokeGroupSet:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)_averageInterStrokeGroupDistanceForSortedStrokeGroups:(id)arg0 outStdDev:(*CGFloat)arg1 ;
+(NSInteger)_newStrokeGroupUniqueIdentifier;
+(id)strokeGroupContainingStrokeIdentifier:(id)arg0 strokeGroups:(id)arg1 ;
+(id)strokeGroupContainingStrokeIdentifier:(id)arg0 strokeGroups:(id)arg1 foundStrokeGroupIndex:(*NSInteger)arg2 ;
+(id)strokeGroupsClusteredByProximity:(id)arg0 ;
+(id)strokeIdentifierToGroupIndexMappingForStrokeIdentifiers:(id)arg0 orderedStrokeGroups:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStrokeGroup:(id)arg0 ;
-(BOOL)isEquivalentToStrokeGroup:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)groupByAddingStrokeIdentifiers:(id)arg0 removingStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect )arg4 classification:(NSInteger)arg5 groupingConfidence:(CGFloat)arg6 firstStrokeOrigin:(struct CGPoint )arg7 ;
-(id)init;
-(id)initWithAncestorIdentifier:(NSInteger)arg0 strokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect )arg4 classification:(NSInteger)arg5 groupingConfidence:(CGFloat)arg6 strategyIdentifier:(id)arg7 firstStrokeOrigin:(struct CGPoint )arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStrokeIdentifiers:(id)arg0 firstStrokeIdentifier:(id)arg1 lastStrokeIdentifier:(id)arg2 bounds:(struct CGRect )arg3 classification:(NSInteger)arg4 groupingConfidence:(CGFloat)arg5 strategyIdentifier:(id)arg6 firstStrokeOrigin:(struct CGPoint )arg7 ;
-(id)initWithUniqueIdentifier:(NSInteger)arg0 ancestorIdentifier:(NSInteger)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect )arg5 classification:(NSInteger)arg6 groupingConfidence:(CGFloat)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(struct CGPoint )arg9 ;
-(struct CGPath *)newEstimatedBaselineForStrokesWithTokens:(id)arg0 tokenStrokeIdentifiers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif