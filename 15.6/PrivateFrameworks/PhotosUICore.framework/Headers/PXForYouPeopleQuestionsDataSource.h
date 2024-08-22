// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOUPEOPLEQUESTIONSDATASOURCE_H
#define PXFORYOUPEOPLEQUESTIONSDATASOURCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXForYouPeopleQuestionsDataSource : NSObject

@property (retain, nonatomic) NSArray *questions; // ivar: _questions


+(id)_fetchData;
+(id)_suggestedNames;
-(id)init;


@end


#endif