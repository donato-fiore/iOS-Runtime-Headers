// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOMPOUNDOBJECTMAP_H
#define _UICOMPOUNDOBJECTMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICompoundObjectMap : NSObject {
    NSMutableDictionary *_mapTable;
}




+(id)compoundObjectMap;
+(id)generateKeyForObject:(id)arg0 andProperty:(id)arg1 ;
-(id)deepCopy;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)valueForObject:(id)arg0 andProperty:(id)arg1 ;
-(void)performWithEach:(id)arg0 ;
-(void)removeAllMappings;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forObject:(id)arg1 andProperty:(id)arg2 ;


@end


#endif