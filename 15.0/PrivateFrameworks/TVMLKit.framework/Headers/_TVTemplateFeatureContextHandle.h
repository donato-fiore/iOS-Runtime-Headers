// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVTEMPLATEFEATURECONTEXTHANDLE_H
#define _TVTEMPLATEFEATURECONTEXTHANDLE_H


#import <Foundation/Foundation.h>


@interface _TVTemplateFeatureContextHandle : NSObject

@property (readonly, nonatomic) id *context; // ivar: _context
@property (nonatomic) NSInteger rank; // ivar: _rank


+(id)handleWithContext:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif