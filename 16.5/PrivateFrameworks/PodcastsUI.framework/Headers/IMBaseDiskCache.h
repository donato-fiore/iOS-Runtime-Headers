// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBASEDISKCACHE_H
#define IMBASEDISKCACHE_H

@class NSString;
@protocol IMCache;

#import <Foundation/Foundation.h>


@interface IMBaseDiskCache : NSObject <IMCache>



@property (retain, nonatomic) NSString *basePath; // ivar: _basePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasItemForKey:(id)arg0 ;
-(BOOL)isEmpty;
-(id)_allFiles;
-(id)init;
-(id)initWithBasePath:(id)arg0 ;
-(id)pathForKey:(id)arg0 ;
-(void)clearCache;
-(void)initialize;
-(void)removeItemForKey:(id)arg0 ;
-(void)removeItemsWithPrefx:(id)arg0 ;


@end


#endif