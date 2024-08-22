// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLRUCACHE_H
#define CKLRUCACHE_H

@class CPLRUDictionary, NSString;
@protocol CKCache;



@interface CKLRUCache : CPLRUDictionary <CKCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMaximumCapacity:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif