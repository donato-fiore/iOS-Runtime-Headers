// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOCONFIGSTORAGEREMOTE_H
#define _GEOCONFIGSTORAGEREMOTE_H

@class NSString;
@protocol GEOConfigStorageReadOnly;

#import <Foundation/Foundation.h>


@interface _GEOConfigStorageRemote : NSObject <GEOConfigStorageReadOnly>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getConfigValueForKey:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 source:(*NSInteger)arg3 ;
-(void)resync;


@end


#endif