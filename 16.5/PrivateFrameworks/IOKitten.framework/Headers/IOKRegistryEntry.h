// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOKREGISTRYENTRY_H
#define IOKREGISTRYENTRY_H

@class NSString, NSDictionary;


#import "IOKObject.h"

@interface IOKRegistryEntry : IOKObject

@property (readonly, nonatomic) NSUInteger entryID;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *properties;


+(id)entryFromPath:(id)arg0 ;
+(id)registryIteratorForPlane:(id)arg0 withOptions:(unsigned int)arg1 error:(*id)arg2 ;
+(id)rootEntry;
-(BOOL)isAttachedToPlane:(id)arg0 ;
-(id)childInPlane:(id)arg0 error:(*id)arg1 ;
-(id)childInServicePlaneWithError:(*id)arg0 ;
-(id)childIteratorInPlane:(id)arg0 error:(*id)arg1 ;
-(id)childIteratorInPlane:(id)arg0 error:(*id)arg1 withEnumerationBlock:(id)arg2 ;
-(id)childIteratorInServicePlaneWithError:(*id)arg0 ;
-(id)childIteratorInServicePlaneWithError:(*id)arg0 enumerationBlock:(id)arg1 ;
-(id)initWithIOObject:(unsigned int)arg0 ;
-(id)initWithRegistryEntry:(unsigned int)arg0 ;
-(id)locationInPlane:(id)arg0 error:(*id)arg1 ;
-(id)locationInServicePlaneWithError:(*id)arg0 ;
-(id)nameInPlane:(id)arg0 error:(*id)arg1 ;
-(id)nameInServicePlaneWithError:(*id)arg0 ;
-(id)parentEntryInPlane:(id)arg0 error:(*id)arg1 ;
-(id)parentEntryInServicePlaneWithError:(*id)arg0 ;
-(id)parentIteratorInPlane:(id)arg0 error:(*id)arg1 ;
-(id)parentIteratorInPlane:(id)arg0 error:(*id)arg1 withEnumerationBlock:(id)arg2 ;
-(id)parentIteratorInServicePlaneWithError:(*id)arg0 ;
-(id)parentIteratorInServicePlaneWithError:(*id)arg0 enumerationBlock:(id)arg1 ;
-(id)pathInPlane:(id)arg0 ;
-(id)pathInServicePlane;
-(id)propertyForKey:(id)arg0 ;
-(id)registryIteratorForPlane:(id)arg0 withOptions:(unsigned int)arg1 error:(*id)arg2 ;
-(id)registryIteratorForServicePlaneWithOptions:(unsigned int)arg0 error:(*id)arg1 ;
-(id)searchForPropertyWithKey:(id)arg0 inPlane:(id)arg1 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;


@end


#endif