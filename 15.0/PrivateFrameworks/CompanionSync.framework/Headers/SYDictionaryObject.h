// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYDICTIONARYOBJECT_H
#define SYDICTIONARYOBJECT_H

@class NSString, NSDictionary;
@protocol SYObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SYDictionaryObject : NSObject <SYObject, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)syncId;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif