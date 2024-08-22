// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPMODELLIBRARYREQUESTPROPERTYFILTER_H
#define _MPMODELLIBRARYREQUESTPROPERTYFILTER_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _MPModelLibraryRequestPropertyFilter : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger comparisonType; // ivar: _comparisonType
@property (readonly, copy, nonatomic) NSArray *keys; // ivar: _keys
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeys:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif