// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMCHANGEDOBJECTIDSTORAGE_H
#define _REMCHANGEDOBJECTIDSTORAGE_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding, REMChangedObjectIdentifying;

#import <Foundation/Foundation.h>


@interface _REMChangedObjectIDStorage : NSObject <NSCopying, NSSecureCoding, REMChangedObjectIdentifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *entityName; // ivar: _entityName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 entityName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif