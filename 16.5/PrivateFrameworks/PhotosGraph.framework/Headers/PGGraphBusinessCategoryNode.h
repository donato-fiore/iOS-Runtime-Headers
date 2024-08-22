// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHBUSINESSCATEGORYNODE_H
#define PGGRAPHBUSINESSCATEGORYNODE_H

@class NSString;
@protocol PGGraphLocalizable;


#import "PGGraphPropertylessNode.h"
#import "PGGraphBusinessCategoryNodeCollection.h"

@interface PGGraphBusinessCategoryNode : PGGraphPropertylessNode <PGGraphLocalizable>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphBusinessCategoryNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) Class superclass;


+(id)businessOfCategory;
+(id)filter;
+(id)filterWithCategories:(id)arg0 ;
+(id)filterWithCategory:(id)arg0 ;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;
-(unsigned short)domain;


@end


#endif