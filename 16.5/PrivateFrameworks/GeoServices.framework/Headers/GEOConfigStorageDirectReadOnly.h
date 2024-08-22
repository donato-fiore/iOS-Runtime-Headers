// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGSTORAGEDIRECTREADONLY_H
#define GEOCONFIGSTORAGEDIRECTREADONLY_H

@class NSURL, NSMutableDictionary, NSString;
@protocol GEOConfigStorageReadOnly;

#import <Foundation/Foundation.h>


@interface GEOConfigStorageDirectReadOnly : NSObject <GEOConfigStorageReadOnly>

 {
    NSInteger _source;
    NSURL *_path;
    os_unfair_lock_s _valueStoreLock;
    NSMutableDictionary *_valueStore;
    atomic_flag _isReading;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getConfigValueForKey:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 source:(*NSInteger)arg3 ;
-(id)initWithPath:(id)arg0 forSource:(NSInteger)arg1 ;
-(void)resync;


@end


#endif