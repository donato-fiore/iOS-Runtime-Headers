// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLFINDMYACCESSORYCONNECTIONMATERIAL_H
#define CLFINDMYACCESSORYCONNECTIONMATERIAL_H

@class NSData, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryConnectionMaterial : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSData *address; // ivar: _address
@property (readonly) NSData *ltk; // ivar: _ltk
@property (readonly) NSNumber *primaryIndex; // ivar: _primaryIndex
@property (readonly) NSNumber *secondaryIndex; // ivar: _secondaryIndex


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMaterial:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)dictionaryDescription;
-(id)init;
-(id)initWithAddress:(id)arg0 ltk:(id)arg1 ;
-(id)initWithAddress:(id)arg0 ltk:(id)arg1 primaryIndex:(id)arg2 secondaryIndex:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif