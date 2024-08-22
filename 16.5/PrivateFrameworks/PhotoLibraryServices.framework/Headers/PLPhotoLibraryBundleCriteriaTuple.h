// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOLIBRARYBUNDLECRITERIATUPLE_H
#define PLPHOTOLIBRARYBUNDLECRITERIATUPLE_H


#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundle.h"
#import "PLBackgroundJobCriteria.h"

@interface PLPhotoLibraryBundleCriteriaTuple : NSObject

@property (readonly, nonatomic) PLPhotoLibraryBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria; // ivar: _criteria


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBundle:(id)arg0 withCriteria:(id)arg1 ;


@end


#endif