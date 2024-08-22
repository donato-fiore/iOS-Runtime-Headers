// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALPREFERENCESTORE_H
#define CALPREFERENCESTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CalPreferenceStore : NSObject {
    NSMutableDictionary *_keys;
    NSMutableDictionary *_values;
}




-(BOOL)getValue:(*id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(id)init;
-(void)setValue:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;


@end


#endif