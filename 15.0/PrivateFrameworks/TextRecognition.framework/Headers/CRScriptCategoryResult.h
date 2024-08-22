// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSCRIPTCATEGORYRESULT_H
#define CRSCRIPTCATEGORYRESULT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CRScriptCategory.h"

@interface CRScriptCategoryResult : NSObject <NSCopying>



@property (readonly) float probability; // ivar: _probability
@property (readonly) CRScriptCategory *scriptCategory; // ivar: _scriptCategory
@property (readonly) float valid;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithScriptCategory:(id)arg0 probability:(float)arg1 ;


@end


#endif