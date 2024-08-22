// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKCLASSGROUP_H
#define LKCLASSGROUP_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LKClassGroup : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *classGroupName; // ivar: _classGroupName
@property (readonly, copy, nonatomic) NSArray *classes; // ivar: _classes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLKClassGroup:(id)arg0 ;
-(id)initWithClassGroupDictionary:(id)arg0 classesDictionaryByClassID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupName:(id)arg0 classes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif