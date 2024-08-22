// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANSECTIONSUBTYPEDESCRIPTOR_H
#define ANSECTIONSUBTYPEDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANSectionSubtypeDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *accountTypeID; // ivar: _accountTypeID
@property (nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked; // ivar: _allowsAddingToLockScreenWhenUnlocked
@property (copy, nonatomic) NSString *fullUnlockActionLabel; // ivar: _fullUnlockActionLabel
@property (nonatomic) NSInteger subtype; // ivar: _subtype


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initForAccountWithType:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif