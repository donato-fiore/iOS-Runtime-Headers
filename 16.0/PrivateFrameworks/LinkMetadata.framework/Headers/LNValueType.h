// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNVALUETYPE_H
#define LNVALUETYPE_H

@class NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNValueType : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSSet *objectClassesForCoding;


+(BOOL)supportsSecureCoding;
-(BOOL)objectIsMemberOfType:(id)arg0 ;
-(Class)objectClass;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)metadataClassesForCoding;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesOfValueType:(id)arg0 value:(id)arg1 block:(id)arg2 ;


@end


#endif