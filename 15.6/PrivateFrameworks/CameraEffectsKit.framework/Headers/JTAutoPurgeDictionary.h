// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JTAUTOPURGEDICTIONARY_H
#define JTAUTOPURGEDICTIONARY_H

@class NSMutableDictionary;
@protocol JTAutoPurgeDictionaryDelegate;

#import <Foundation/Foundation.h>


@interface JTAutoPurgeDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}


@property (readonly) NSUInteger count;
@property (weak, nonatomic) NSObject<JTAutoPurgeDictionaryDelegate> *delegate; // ivar: _delegate
@property BOOL suspendPurging; // ivar: _suspendPurging


-(id)copyOfDictionary;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)highMemoryWarning;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif