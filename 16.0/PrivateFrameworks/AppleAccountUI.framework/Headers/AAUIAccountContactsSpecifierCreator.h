// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIACCOUNTCONTACTSSPECIFIERCREATOR_H
#define AAUIACCOUNTCONTACTSSPECIFIERCREATOR_H


#import <Foundation/Foundation.h>


@interface AAUIAccountContactsSpecifierCreator : NSObject



-(id)createAddTableCellWithTitle:(id)arg0 loadAction:(SEL)arg1 target:(id)arg2 ;
-(id)createGroupSpecifierWithIdentifier:(id)arg0 title:(id)arg1 footerText:(id)arg2 linkText:(id)arg3 actionMethodName:(id)arg4 target:(id)arg5 ;
-(id)createSubtitleTableCellWithName:(id)arg0 title:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ;
-(id)createTableCellForContact:(id)arg0 loadAction:(SEL)arg1 target:(id)arg2 ;
-(id)createTableCellWithName:(id)arg0 title:(id)arg1 longSubtitle:(id)arg2 image:(id)arg3 ;


@end


#endif