// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSFIELD_H
#define PKPASSFIELD_H

@class NSString, NSSet, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassField : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_value;
}


@property (nonatomic) NSInteger cellStyle; // ivar: _cellStyle
@property (copy, nonatomic) NSString *changeMessage; // ivar: _changeMessage
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (copy, nonatomic) NSSet *foreignReferenceIdentifiers; // ivar: _foreignReferenceIdentifiers
@property (nonatomic) NSInteger foreignReferenceType; // ivar: _foreignReferenceType
@property (readonly, nonatomic) BOOL isDrillInField;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *link; // ivar: _link
@property (nonatomic) NSUInteger row; // ivar: _row
@property (copy, nonatomic) NSDictionary *semantics; // ivar: _semantics
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) id *unformattedValue; // ivar: _unformattedValue
@property (nonatomic) NSInteger unitType; // ivar: _unitType
@property (readonly, weak) NSString *value;


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)asMutableDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flushCachedValue;


@end


#endif