// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXFORYOUPEOPLEQUESTION_H
#define _PXFORYOUPEOPLEQUESTION_H

@class PHPerson;

#import <Foundation/Foundation.h>


@interface _PXForYouPeopleQuestion : NSObject

@property (readonly, nonatomic) NSInteger questionType; // ivar: _questionType
@property (readonly, nonatomic) PHPerson *targetPerson; // ivar: _targetPerson


-(id)initWithQuestionType:(NSInteger)arg0 targetPerson:(id)arg1 ;


@end


#endif