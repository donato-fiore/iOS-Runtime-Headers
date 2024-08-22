// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIIOOBJECT_H
#define DIIOOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DIIOObject : NSObject

@property (readonly, copy, nonatomic) NSString *ioClassName;
@property (readonly, nonatomic) unsigned int ioObj; // ivar: _ioObj


+(id)copyDiskImagesControllerWithError:(*id)arg0 ;
-(NSUInteger)registryEntryIDWithError:(*id)arg0 ;
-(id)copyParentWithError:(*id)arg0 ;
-(id)copyPropertyWithClass:(Class)arg0 key:(id)arg1 ;
-(id)description;
-(id)initWithClassName:(id)arg0 error:(*id)arg1 ;
-(id)initWithDIIOObject:(id)arg0 ;
-(id)initWithIOObject:(unsigned int)arg0 ;
-(id)initWithIOObject:(unsigned int)arg0 retain:(BOOL)arg1 ;
-(id)initWithIteratorNext:(id)arg0 ;
-(id)initWithRegistryEntryID:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)ioObjectWithClassName:(id)arg0 iterateParent:(BOOL)arg1 error:(*id)arg2 ;
-(id)newIteratorWithOptions:(unsigned int)arg0 retryIfInvalidated:(BOOL)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif