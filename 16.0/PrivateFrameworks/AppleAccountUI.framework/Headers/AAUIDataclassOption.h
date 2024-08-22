// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIDATACLASSOPTION_H
#define AAUIDATACLASSOPTION_H

@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AAUIDataclassOption : NSObject <NSCoding, NSSecureCoding>



@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithActions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif