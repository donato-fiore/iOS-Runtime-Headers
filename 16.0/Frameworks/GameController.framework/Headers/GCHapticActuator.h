// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCHAPTICACTUATOR_H
#define GCHAPTICACTUATOR_H

@class NSString;
@protocol NSSecureCoding, GCJSONRepresentable, NSCopying;

#import <Foundation/Foundation.h>


@interface GCHapticActuator : NSObject <NSSecureCoding, GCJSONRepresentable, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger index; // ivar: _index
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONDictionaryRepresentation:(id)arg0 ;
-(id)initWithLabel:(id)arg0 type:(NSInteger)arg1 index:(NSUInteger)arg2 ;
-(id)jsonDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif