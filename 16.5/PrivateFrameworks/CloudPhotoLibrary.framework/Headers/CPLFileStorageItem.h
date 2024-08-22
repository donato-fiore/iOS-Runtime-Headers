// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLFILESTORAGEITEM_H
#define CPLFILESTORAGEITEM_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CPLResourceIdentity.h"

@interface CPLFileStorageItem : NSObject <NSCopying>



@property (readonly, nonatomic) CPLResourceIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) NSDate *lastAccessDate; // ivar: _lastAccessDate
@property (readonly, nonatomic, getter=isMarkedForDelete) BOOL markedForDelete; // ivar: _markedForDelete
@property (readonly, nonatomic, getter=isOriginal) BOOL original; // ivar: _original


-(BOOL)getResourceValue:(*id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentity:(id)arg0 original:(BOOL)arg1 markedForDelete:(BOOL)arg2 lastAccessDate:(id)arg3 ;


@end


#endif