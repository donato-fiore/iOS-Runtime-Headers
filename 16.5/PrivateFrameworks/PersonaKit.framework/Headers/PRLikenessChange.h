// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRLIKENESSCHANGE_H
#define PRLIKENESSCHANGE_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface PRLikenessChange : NSObject

@property (copy, nonatomic) NSString *changedLikenessID; // ivar: _changedLikenessID
@property (copy, nonatomic) NSNumber *changedLikenessVersion; // ivar: _changedLikenessVersion
@property (copy, nonatomic) NSArray *dirtyLikenessProperties; // ivar: _dirtyLikenessProperties
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)changeTypeFromDescription:(id)arg0 ;
+(id)changeForLikeness:(id)arg0 withType:(NSUInteger)arg1 ;
+(id)descriptionForChangeType:(NSUInteger)arg0 ;
-(id)description;


@end


#endif