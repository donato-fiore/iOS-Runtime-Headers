// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRUIFDICTIONARYSCHEMA_H
#define SRUIFDICTIONARYSCHEMA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SRUIFDictionarySchema : NSObject {
    NSMutableDictionary *_coercions;
}




-(id)coerceObject:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)setObjectCoercion:(id)arg0 forKey:(id)arg1 ;


@end


#endif