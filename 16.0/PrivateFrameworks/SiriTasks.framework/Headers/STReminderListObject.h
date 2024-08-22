// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STREMINDERLISTOBJECT_H
#define STREMINDERLISTOBJECT_H

@class STSiriModelObject, NSString;



@interface STReminderListObject : STSiriModelObject {
    NSString *_name;
}




+(BOOL)supportsSecureCoding;
-(id)_aceContextObjectValue;
-(id)_aceValue;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif