// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSETTINGCHANGE_H
#define STSETTINGCHANGE_H



#import "STSiriModelObject.h"

@interface STSettingChange : STSiriModelObject {
    NSInteger _settingType;
    id *_valueBeforeUpdate;
    id *_valueAfterUpdate;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)settingType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettingType:(NSInteger)arg0 valueBeforeUpdate:(id)arg1 valueAfterUpdate:(id)arg2 ;
-(id)valueAfterUpdate;
-(id)valueBeforeUpdate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif