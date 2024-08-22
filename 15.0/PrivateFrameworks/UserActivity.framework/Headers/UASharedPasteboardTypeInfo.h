// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UASHAREDPASTEBOARDTYPEINFO_H
#define UASHAREDPASTEBOARDTYPEINFO_H

@class NSFileHandle, NSNumber, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UASharedPasteboardTypeInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain) NSFileHandle *dataFile; // ivar: _dataFile
@property (copy) NSNumber *index; // ivar: _index
@property (copy) NSNumber *offset; // ivar: _offset
@property BOOL preferFileRep; // ivar: _preferFileRep
@property NSInteger size; // ivar: _size
@property (copy) NSString *type; // ivar: _type
@property (copy) NSString *typeHint; // ivar: _typeHint
@property (copy) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif