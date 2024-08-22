// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBBRIDGEWATCHATTRIBUTECONTROLLER_H
#define PBBRIDGEWATCHATTRIBUTECONTROLLER_H

@class NRDevice, NSCache;

#import <Foundation/Foundation.h>


@interface PBBridgeWatchAttributeController : NSObject

@property (retain, nonatomic) NRDevice *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger edition; // ivar: _edition
@property (readonly, nonatomic) NSUInteger hardwareBehavior; // ivar: _hardwareBehavior
@property (readonly, nonatomic) BOOL hasTwoYearWarranty;
@property (readonly, nonatomic) NSUInteger internalSize; // ivar: _internalSize
@property (readonly, nonatomic) NSUInteger material; // ivar: _material
@property (readonly, nonatomic) NSUInteger size;
@property (retain, nonatomic) NSCache *stringCache; // ivar: _stringCache


+(NSUInteger)_materialForCLHSValue:(NSUInteger)arg0 ;
+(NSUInteger)materialFromDevice:(id)arg0 ;
+(NSUInteger)sizeFromDevice:(id)arg0 ;
+(id)editionDescription:(NSUInteger)arg0 ;
+(id)hwBehaviorDescription:(NSUInteger)arg0 ;
+(id)materialDescription:(NSUInteger)arg0 ;
+(id)materialKeyColorForMaterial:(NSUInteger)arg0 ;
+(id)resourceString:(id)arg0 material:(NSUInteger)arg1 size:(NSUInteger)arg2 forAttributes:(NSUInteger)arg3 ;
+(id)sharedDeviceController;
+(id)sizeDescription:(NSUInteger)arg0 ;
+(unsigned short)sizeFromInternalSize:(NSUInteger)arg0 ;
-(id)attributesDescription;
-(id)getGestaltDmin;
-(id)init;
-(id)resourceString:(id)arg0 forAttributes:(NSUInteger)arg1 ;
-(void)_populateMaterialDetailsWithDMinProperities:(id)arg0 ;


@end


#endif