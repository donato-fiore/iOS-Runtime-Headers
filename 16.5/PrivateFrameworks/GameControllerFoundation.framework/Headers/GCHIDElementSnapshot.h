// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCHIDELEMENTSNAPSHOT_H
#define GCHIDELEMENTSNAPSHOT_H

@class NSString;
@protocol GCHIDElementAttributes, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCHIDElementSnapshot : NSObject <GCHIDElementAttributes, NSSecureCoding>



@property (readonly) int collectionType; // ivar: _collectionType
@property (readonly) unsigned int elementCookie; // ivar: _elementCookie
@property (readonly) unsigned int flags; // ivar: _flags
@property (readonly) unsigned char hasNullState; // ivar: _hasNullState
@property (readonly) unsigned char hasPreferredState; // ivar: _hasPreferredState
@property (readonly) unsigned char isArray; // ivar: _isArray
@property (readonly) unsigned char isNonLinear; // ivar: _isNonLinear
@property (readonly) unsigned char isRelative; // ivar: _isRelative
@property (readonly) unsigned char isWrapping; // ivar: _isWrapping
@property (readonly) NSInteger max; // ivar: _max
@property (readonly) NSInteger min; // ivar: _min
@property (readonly) NSString *name; // ivar: _name
@property (readonly) unsigned int reportCount; // ivar: _reportCount
@property (readonly) NSInteger reportID; // ivar: _reportID
@property (readonly) NSInteger reportSize; // ivar: _reportSize
@property (readonly) NSInteger scaledMax; // ivar: _scaledMax
@property (readonly) NSInteger scaledMin; // ivar: _scaledMin
@property (readonly) NSInteger size; // ivar: _size
@property (readonly) int type; // ivar: _type
@property (readonly) NSInteger unit; // ivar: _unit
@property (readonly) NSInteger unitExponent; // ivar: _unitExponent
@property (readonly) NSInteger usage; // ivar: _usage
@property (readonly) NSInteger usagePage; // ivar: _usagePage
@property (readonly) NSInteger usageType; // ivar: _usageType
@property (readonly) NSInteger usageTypeIndex; // ivar: _usageTypeIndex


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHIDElement:(id)arg0 ;
-(id)valueForElementKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif