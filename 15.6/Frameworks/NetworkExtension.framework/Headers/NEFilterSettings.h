// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERSETTINGS_H
#define NEFILTERSETTINGS_H

@class NSArray;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEFilterSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (readonly) NSInteger defaultAction; // ivar: _defaultAction
@property (readonly, copy) NSArray *rules; // ivar: _rules


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRules:(id)arg0 defaultAction:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif