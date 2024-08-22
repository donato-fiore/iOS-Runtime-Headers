// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINSTRUMENTATIONUTILITIESRECENTPASSWORDMODE_H
#define ICINSTRUMENTATIONUTILITIESRECENTPASSWORDMODE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICInstrumentationUtilitiesRecentPasswordMode : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger contextPath; // ivar: _contextPath
@property (nonatomic) short lockedNotesMode; // ivar: _lockedNotesMode


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif