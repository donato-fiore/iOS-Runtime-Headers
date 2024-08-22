// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSCRIPTCATEGORY_H
#define CRSCRIPTCATEGORY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CRScriptCategory : NSObject <NSCopying>



@property (readonly) NSString *categoryName; // ivar: _categoryName
@property (readonly) NSUInteger categoryRevision;


+(float)confidenceThreshold;
+(id)supportedCategories;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCategoryName:(id)arg0 ;


@end


#endif