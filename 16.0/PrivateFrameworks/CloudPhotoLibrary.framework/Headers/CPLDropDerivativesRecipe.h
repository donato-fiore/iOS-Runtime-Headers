// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLDROPDERIVATIVESRECIPE_H
#define CPLDROPDERIVATIVESRECIPE_H

@class NSArray, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLDropDerivativesRecipe : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) NSArray *derivativeTypes; // ivar: _derivativeTypes
@property (readonly, nonatomic) NSDictionary *plistDescription;
@property (readonly, nonatomic) NSUInteger sourceResourceType; // ivar: _sourceResourceType
@property (readonly, nonatomic) NSString *uti; // ivar: _uti


+(BOOL)supportsSecureCoding;
+(NSUInteger)changeRecordTypeFromShortDescription:(id)arg0 ;
+(id)archiveArrayOfCPLDropDerivativeRecipes:(id)arg0 ;
+(id)shortDescriptionForResourceChangeRecordType:(NSUInteger)arg0 ;
+(id)unarchiveArrayOfCPLDropDerivativeRecipesFrom:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceResourceType:(NSUInteger)arg0 uti:(id)arg1 changeType:(NSUInteger)arg2 droppingDerivativeTypes:(id)arg3 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif