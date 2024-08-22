// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMOBJECT_H
#define EMOBJECT_H

@class NSString;
@protocol EMObject, NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>

#import "EMObjectID.h"

@interface EMObject : NSObject <EMObject, NSSecureCoding, EFPubliclyDescribable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) EMObjectID *objectID; // ivar: _objectID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 ;
-(void)_commonInitWithObjectID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif