// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSAPPLICATIONLIBRARYCONFIGURATION_H
#define FBSAPPLICATIONLIBRARYCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FBSApplicationLibraryConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL allowConcurrentLoading; // ivar: _allowConcurrentLoading
@property (retain, nonatomic) Class applicationInfoClass; // ivar: _applicationInfoClass
@property (retain, nonatomic) Class applicationPlaceholderClass; // ivar: _applicationPlaceholderClass
@property (copy, nonatomic) id *installedApplicationFilter; // ivar: _installedApplicationFilter
@property (copy, nonatomic) id *placeholderFilter; // ivar: _placeholderFilter


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif