// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADGENERICTEXTFIELD_H
#define OADGENERICTEXTFIELD_H

@class NSString;


#import "OADTextField.h"

@interface OADGenericTextField : OADTextField

@property (copy, nonatomic) NSString *guid; // ivar: _guid
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isSimilarToTextRun:(id)arg0 ;
-(id)initWithGuid:(id)arg0 type:(id)arg1 ;


@end


#endif