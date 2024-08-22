// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOLIBRARYBUNDLEPRIORITYTUPLE_H
#define PLPHOTOLIBRARYBUNDLEPRIORITYTUPLE_H


#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundle.h"

@interface PLPhotoLibraryBundlePriorityTuple : NSObject

@property (readonly, nonatomic) PLPhotoLibraryBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBundle:(id)arg0 priority:(NSInteger)arg1 ;


@end


#endif