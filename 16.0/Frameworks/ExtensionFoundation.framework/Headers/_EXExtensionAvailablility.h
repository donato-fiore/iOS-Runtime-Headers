// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSIONAVAILABLILITY_H
#define _EXEXTENSIONAVAILABLILITY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _EXExtensionAvailablility : NSObject <NSSecureCoding>



@property NSInteger disabledCount; // ivar: _disabledCount
@property NSInteger enabledCount; // ivar: _enabledCount
@property NSInteger unelectedCount; // ivar: _unelectedCount


+(BOOL)supportsSecureCoding;
+(id)addChangeObserver:(id)arg0 ;
+(void)removeChangeObserver:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif