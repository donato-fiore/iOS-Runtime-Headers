// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ININTENTDESCRIPTION_H
#define ININTENTDESCRIPTION_H

@class NSDictionary, NSString;
@protocol INIntentDescriptionExport, NSCopying;

#import <Foundation/Foundation.h>


@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying>

 {
    NSDictionary *_slotsByName;
    NSDictionary *_alternativeSlotNames;
}


@property (readonly, nonatomic) SEL confirmSelector; // ivar: _confirmSelector
@property (readonly, nonatomic) Class dataClass; // ivar: _dataClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Class facadeClass; // ivar: _facadeClass
@property (readonly, nonatomic) SEL handleSelector; // ivar: _handleSelector
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *responseName; // ivar: _responseName
@property (readonly, copy, nonatomic) NSDictionary *slotsByName;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 responseName:(id)arg1 facadeClass:(Class)arg2 dataClass:(Class)arg3 type:(id)arg4 isPrivate:(BOOL)arg5 handleSelector:(SEL)arg6 confirmSelector:(SEL)arg7 slotsByName:(id)arg8 ;
-(id)slotByName:(id)arg0 ;
-(id)slotDescriptions;


@end


#endif