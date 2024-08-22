// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHENTITYKEYMAP_H
#define PHENTITYKEYMAP_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PHEntityKeyMap : NSObject {
    NSDictionary *_propertyKeysByEntityKey;
    NSDictionary *_entityKeysByPropertyKey;
}




+(id)transposePropertyKeysByEntityKey:(id)arg0 ;
+(void)assertPropertyKey:(id)arg0 doesNotExistForEntityKey:(id)arg1 inEntityKeysByProperty:(id)arg2 ;
-(id)entityKeyForPropertyKey:(id)arg0 ;
-(id)initWithPropertyKeysByEntityKey:(id)arg0 ;
-(id)propertyKeyForEntityKey:(id)arg0 ;


@end


#endif