// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKATTACHMENT_H
#define HKATTACHMENT_H

@class UTType, NSDate, NSUUID, NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKAttachment : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy) UTType *contentType; // ivar: _contentType
@property (readonly, copy) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) NSInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 typeIdentifier:(id)arg2 size:(NSInteger)arg3 creationDate:(id)arg4 metadata:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif