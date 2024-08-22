// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ININTENTRESPONSEDESCRIPTION_H
#define ININTENTRESPONSEDESCRIPTION_H

@class NSString, NSDictionary;
@protocol INIntentResponseDescriptionExport, NSCopying;

#import <Foundation/Foundation.h>


@interface INIntentResponseDescription : NSObject <INIntentResponseDescriptionExport, NSCopying>



@property (readonly, nonatomic) Class dataClass; // ivar: _dataClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Class facadeClass; // ivar: _facadeClass
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSDictionary *slotsByName; // ivar: _slotsByName
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 facadeClass:(Class)arg1 dataClass:(Class)arg2 type:(id)arg3 isPrivate:(BOOL)arg4 slotsByName:(id)arg5 ;


@end


#endif