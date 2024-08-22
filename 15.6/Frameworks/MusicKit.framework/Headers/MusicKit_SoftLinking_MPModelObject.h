// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELOBJECT_H
#define MUSICKIT_SOFTLINKING_MPMODELOBJECT_H

@class MPModelObject, NSString, NSDictionary;
@protocol MusicKit_SoftLinking_MPSectionedCollectionObject;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelObject : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject>

 {
    MPModelObject *_underlyingModelObject;
}


@property (readonly, nonatomic) MPModelObject *_underlyingModelObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger libraryRemovalSupportedOptions;
@property (readonly, nonatomic) NSDictionary *storageDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) id *underlyingObject;


+(NSInteger)keepLocalEnabledStateForRawValue:(NSInteger)arg0 ;
+(NSInteger)keepLocalManagedStatusForRawValue:(NSInteger)arg0 ;
+(NSInteger)rawValueForKeepLocalEnabledState:(NSInteger)arg0 ;
+(NSInteger)rawValueForKeepLocalManagedStatus:(NSInteger)arg0 ;
+(id)_createUnderlyingModelObjectWithIdentifierSet:(id)arg0 modelObjectType:(NSInteger)arg1 storageDictionary:(id)arg2 ;
-(id)initWithIdentifierSet:(id)arg0 modelObjectType:(NSInteger)arg1 storageDictionary:(id)arg2 ;
-(id)initWithUnderlyingModelObject:(id)arg0 ;


@end


#endif