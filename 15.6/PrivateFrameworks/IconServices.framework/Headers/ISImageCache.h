// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISIMAGECACHE_H
#define ISIMAGECACHE_H

@class NSMutableDictionary, NSData;

#import <Foundation/Foundation.h>


@interface ISImageCache : NSObject

@property (retain) NSMutableDictionary *imageBagsByDescriptor; // ivar: _imageBagsByDescriptor
@property (readonly) NSData *latestValidationToken; // ivar: _latestValidationToken
@property os_unfair_lock_s lock; // ivar: _lock


-(id)allImages;
-(id)debugDescription;
-(id)imageForDescriptor:(id)arg0 ;
-(id)init;
-(void)setImage:(id)arg0 forDescriptor:(id)arg1 ;


@end


#endif