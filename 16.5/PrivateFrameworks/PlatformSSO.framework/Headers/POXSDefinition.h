// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXSDEFINITION_H
#define POXSDEFINITION_H

@class NSMutableDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface POXSDefinition : NSObject <NSCopying>

 {
    NSMutableDictionary *_types;
}


@property (readonly, copy, nonatomic) NSArray *types;


-(BOOL)flattenMultiValueElementWithName:(id)arg0 ;
-(Class)typeForName:(id)arg0 ;
-(NSUInteger)maxCountForElementName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)isSpecifiedKeyForAttributeName:(id)arg0 ;
-(id)isSpecifiedKeyForElementName:(id)arg0 ;
-(id)namespaceForAttributeName:(id)arg0 ;
-(id)propertyForName:(id)arg0 ;
-(void)setType:(Class)arg0 forName:(id)arg1 ;


@end


#endif