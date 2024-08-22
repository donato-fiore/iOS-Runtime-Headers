// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CESRUSERDATAOPTIONS_H
#define CESRUSERDATAOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CESRUserDataOptions : NSObject <NSCopying>



@property (nonatomic) unsigned int bestPeopleSuggesterContactsBonus; // ivar: _bestPeopleSuggesterContactsBonus
@property (nonatomic) unsigned int bestPeopleSuggesterContactsCount; // ivar: _bestPeopleSuggesterContactsCount
@property (nonatomic) unsigned int peopleSuggesterContactsCount; // ivar: _peopleSuggesterContactsCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif