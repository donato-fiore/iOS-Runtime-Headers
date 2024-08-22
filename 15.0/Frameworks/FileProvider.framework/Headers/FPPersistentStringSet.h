// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPPERSISTENTSTRINGSET_H
#define FPPERSISTENTSTRINGSET_H

@class NSString, NSMutableSet, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface FPPersistentStringSet : NSObject {
    NSString *_key;
    NSMutableSet *_strings;
    NSUserDefaults *_defaults;
}




-(BOOL)contains:(id)arg0 ;
-(id)initWithDefaults:(id)arg0 key:(id)arg1 ;
-(void)add:(id)arg0 ;
-(void)clear;
-(void)remove:(id)arg0 ;
-(void)save;


@end


#endif