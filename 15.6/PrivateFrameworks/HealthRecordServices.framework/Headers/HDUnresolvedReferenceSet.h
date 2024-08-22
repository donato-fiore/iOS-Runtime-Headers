// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUNRESOLVEDREFERENCESET_H
#define HDUNRESOLVEDREFERENCESET_H

@class NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HDFHIRResourceObject.h"

@interface HDUnresolvedReferenceSet : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSSet *references; // ivar: _references
@property (readonly, nonatomic) HDFHIRResourceObject *resource; // ivar: _resource


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReferences:(id)arg0 resource:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif