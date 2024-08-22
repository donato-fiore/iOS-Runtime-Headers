// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFATTRIBUTEDESCRIPTION_H
#define CARPFATTRIBUTEDESCRIPTION_H

@class NSArray, NSString, NSFormatter;
@protocol CARPFObject, NSObject;

#import <Foundation/Foundation.h>


@interface CARPFAttributeDescription : NSObject <CARPFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSFormatter *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NSObject> *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 value:(id)arg1 ;
-(id)initWithName:(id)arg0 value:(id)arg1 options:(NSUInteger)arg2 formatter:(id)arg3 ;


@end


#endif