// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSTACKROTATIONRECORD_H
#define ATXSTACKROTATIONRECORD_H

@class NSString, INIntent, NSDate;

#import <Foundation/Foundation.h>


@interface ATXStackRotationRecord : NSObject

@property (readonly, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (readonly, nonatomic) CGFloat coolDownInterval; // ivar: _coolDownInterval
@property (readonly, nonatomic) NSString *criterion; // ivar: _criterion
@property (readonly, nonatomic) CGFloat durationLimit; // ivar: _durationLimit
@property (readonly, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (readonly, nonatomic) NSString *infoSuggestionId; // ivar: _infoSuggestionId
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) BOOL isStalenessRotation; // ivar: _isStalenessRotation
@property (readonly, nonatomic) NSDate *rotationDate; // ivar: _rotationDate
@property (readonly, nonatomic) NSString *widgetKind; // ivar: _widgetKind


-(id)init;
-(id)initWithInfoSuggestionId:(id)arg0 clientModelId:(id)arg1 criterion:(id)arg2 widget:(id)arg3 kind:(id)arg4 intent:(id)arg5 isStalenessRotation:(BOOL)arg6 rotationDate:(id)arg7 durationLimit:(CGFloat)arg8 coolDownInterval:(CGFloat)arg9 ;


@end


#endif