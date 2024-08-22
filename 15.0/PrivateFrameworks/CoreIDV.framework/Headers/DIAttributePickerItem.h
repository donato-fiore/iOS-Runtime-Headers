// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIATTRIBUTEPICKERITEM_H
#define DIATTRIBUTEPICKERITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DIAttributePickerItem : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif