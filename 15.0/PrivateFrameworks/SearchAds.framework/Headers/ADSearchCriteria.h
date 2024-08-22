// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADSEARCHCRITERIA_H
#define ADSEARCHCRITERIA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ADSearchCriteria : NSObject <NSCopying>



@property (copy, nonatomic) NSString *languageLocale; // ivar: _languageLocale
@property (copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif