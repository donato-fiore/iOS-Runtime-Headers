// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTEXTUALACTION_H
#define WFCONTEXTUALACTION_H

@class NSString, NSArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFContextualActionFilteringBehavior.h"

@interface WFContextualAction : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic, getter=isAlternate) BOOL alternate; // ivar: _alternate
@property (readonly, nonatomic) NSUInteger correspondingSystemActionType; // ivar: _correspondingSystemActionType
@property (readonly, nonatomic) NSArray *displaySlots; // ivar: _displaySlots
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) WFContextualActionFilteringBehavior *filteringBehavior; // ivar: _filteringBehavior
@property (copy, nonatomic) NSData *iconImageData; // ivar: _iconImageData
@property (nonatomic) CGFloat iconImageScale; // ivar: _iconImageScale
@property (copy, nonatomic) NSString *iconSymbolName; // ivar: _iconSymbolName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSInteger resultFileOperation; // ivar: _resultFileOperation
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)systemActionWithType:(NSUInteger)arg0 identifier:(id)arg1 displayString:(id)arg2 inputTypes:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 actionIdentifier:(id)arg1 type:(NSUInteger)arg2 correspondingSystemActionType:(NSUInteger)arg3 resultFileOperation:(NSInteger)arg4 alternate:(BOOL)arg5 filteringBehavior:(id)arg6 parameters:(id)arg7 displaySlots:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif