// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPOSTEREDIT_H
#define ATXPOSTEREDIT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXPosterEdit : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL didLockscreenHaveWidgetsBeforeEdit; // ivar: _didLockscreenHaveWidgetsBeforeEdit
@property (readonly, nonatomic) NSInteger duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *entryPoint; // ivar: _entryPoint
@property (readonly, copy, nonatomic) NSString *lockscreenId; // ivar: _lockscreenId
@property (readonly, nonatomic, getter=isNewlyCreated) BOOL newlyCreated; // ivar: _newlyCreated
@property (readonly, copy, nonatomic) NSString *outcome; // ivar: _outcome
@property (readonly, nonatomic) NSInteger secondsSinceLastEdit; // ivar: _secondsSinceLastEdit
@property (readonly, nonatomic) BOOL userChangedColor; // ivar: _userChangedColor
@property (readonly, nonatomic) BOOL userChangedFont; // ivar: _userChangedFont
@property (readonly, nonatomic) BOOL userChangedNumberingSystem; // ivar: _userChangedNumberingSystem
@property (readonly, nonatomic) BOOL userChangedPosterContent; // ivar: _userChangedPosterContent
@property (readonly, nonatomic) BOOL userChangedWidgets; // ivar: _userChangedWidgets


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPosterEdit:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLockscreenId:(id)arg0 entryPoint:(id)arg1 newlyCreated:(BOOL)arg2 secondsSinceLastEdit:(NSInteger)arg3 ;
-(id)initWithLockscreenId:(id)arg0 entryPoint:(id)arg1 newlyCreated:(BOOL)arg2 secondsSinceLastEdit:(NSInteger)arg3 outcome:(id)arg4 userChangedColor:(BOOL)arg5 userChangedFont:(BOOL)arg6 userChangedNumberingSystem:(BOOL)arg7 userChangedPosterContent:(BOOL)arg8 userChangedWidgets:(BOOL)arg9 didLockscreenHaveWidgetsBeforeEdit:(BOOL)arg10 duration:(NSUInteger)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif