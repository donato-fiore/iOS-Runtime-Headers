// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KMITEMMAPPER_H
#define KMITEMMAPPER_H

@protocol KMMapper;

#import <Foundation/Foundation.h>


@interface KMItemMapper : NSObject {
    NSObject<KMMapper> *_mapper;
    Class _externalObjectClass;
}




+(id)_mapperForObjectClass:(Class)arg0 error:(*id)arg1 ;
-(NSInteger)targetItemType;
-(id)init;
-(id)initWithObjectClass:(Class)arg0 error:(*id)arg1 ;
-(id)itemsFromExternalObject:(id)arg0 additionalFields:(id)arg1 error:(*id)arg2 ;


@end


#endif