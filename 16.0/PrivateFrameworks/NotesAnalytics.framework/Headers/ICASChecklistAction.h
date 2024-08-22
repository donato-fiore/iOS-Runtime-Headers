// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCHECKLISTACTION_H
#define ICASCHECKLISTACTION_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASChecklistAction : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger checklistAction; // ivar: _checklistAction


-(id)initWithChecklistAction:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif