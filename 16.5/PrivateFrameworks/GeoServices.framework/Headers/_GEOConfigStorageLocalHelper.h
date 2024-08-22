// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOCONFIGSTORAGELOCALHELPER_H
#define _GEOCONFIGSTORAGELOCALHELPER_H

@class NSString;
@protocol GEOConfigStorageReadWrite;

#import <Foundation/Foundation.h>


@interface _GEOConfigStorageLocalHelper : NSObject <GEOConfigStorageReadWrite>

 {
    NSInteger _source;
    id<GEOConfigStorageReadWrite> *_store;
    id<GEOConfigStorageReadWrite> *_direct;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getConfigValueForKey:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 source:(*NSInteger)arg3 ;
-(id)initWithSource:(NSInteger)arg0 store:(id)arg1 directStore:(id)arg2 ;
-(void)resync;
-(void)setConfigValue:(id)arg0 forKey:(id)arg1 options:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif