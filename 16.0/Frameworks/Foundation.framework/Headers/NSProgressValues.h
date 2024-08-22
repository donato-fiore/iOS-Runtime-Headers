// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPROGRESSVALUES_H
#define NSPROGRESSVALUES_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSProgressValues : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_userInfo;
    _NSProgressFraction _selfFraction;
    _NSProgressFraction _childFraction;
    CGFloat _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    NSString *_kind;
    NSInteger _portionOfParent;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    BOOL _usingChildUserInfo;
    BOOL _isPrioritizable;
}




+(BOOL)supportsSecureCoding;
+(id)_importantKeys;
+(id)decodableClasses;
-(BOOL)isFinished;
-(BOOL)isIndeterminate;
-(CGFloat)fractionCompleted;
-(NSInteger)completedUnitCount;
-(NSInteger)totalUnitCount;
-(id)_indentedDescription:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct _NSProgressFraction )overallFraction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCompletedUnitCount:(NSInteger)arg0 ;
-(void)setFinished:(BOOL)arg0 ;
-(void)setFractionCompleted:(CGFloat)arg0 ;
-(void)setIndeterminate:(BOOL)arg0 ;
-(void)setTotalUnitCount:(NSInteger)arg0 ;


@end


#endif