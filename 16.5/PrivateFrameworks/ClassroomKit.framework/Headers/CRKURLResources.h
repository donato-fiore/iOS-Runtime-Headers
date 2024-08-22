// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKURLRESOURCES_H
#define CRKURLRESOURCES_H

@class NSNumber, NSDate, NSMutableDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CRKURLResources : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=isDirectory) NSNumber *directory;
@property (readonly, copy, nonatomic) NSNumber *documentIdentifier;
@property (readonly, nonatomic) NSDate *lastModificationDate;
@property (readonly, copy, nonatomic) NSMutableDictionary *resources; // ivar: _resources
@property (readonly, nonatomic) NSUInteger size;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)immutableResources;
-(id)init;
-(id)initWithResources:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableResources;
-(id)underlyingResources;


@end


#endif