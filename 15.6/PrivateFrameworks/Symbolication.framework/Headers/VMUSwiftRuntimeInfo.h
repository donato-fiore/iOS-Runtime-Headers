// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUSWIFTRUNTIMEINFO_H
#define VMUSWIFTRUNTIMEINFO_H


#import <Foundation/Foundation.h>

#import "VMUMutableClassInfo.h"

@interface VMUSwiftRuntimeInfo : NSObject

@property (readonly, nonatomic) NSUInteger nativeWeakReferenceMarkerMask; // ivar: _nativeWeakReferenceMarkerMask
@property (readonly, nonatomic) NSUInteger nativeWeakReferenceMarkerValue; // ivar: _nativeWeakReferenceMarkerValue
@property (readonly, nonatomic) BOOL nativeWeakReferencePointerIsSideTable; // ivar: _nativeWeakReferencePointerIsSideTable
@property (readonly, nonatomic) NSUInteger nativeWeakReferencePointerMask; // ivar: _nativeWeakReferencePointerMask
@property (readonly, nonatomic) NSUInteger refcountIsSideTableMarkerMask; // ivar: _refcountIsSideTableMarkerMask
@property (readonly, nonatomic) NSUInteger refcountIsSideTableMarkerValue; // ivar: _refcountIsSideTableMarkerValue
@property (readonly, nonatomic) BOOL runtimeHasStableABI; // ivar: _runtimeHasStableABI
@property (readonly, nonatomic) VMUMutableClassInfo *sideTableLayout; // ivar: _sideTableLayout
@property (readonly, nonatomic) unsigned char sideTablePointerLeftShift; // ivar: _sideTablePointerLeftShift
@property (readonly, nonatomic) NSUInteger sideTablePointerMask; // ivar: _sideTablePointerMask
@property (readonly, nonatomic) unsigned char sideTablePointerRightShift; // ivar: _sideTablePointerRightShift
@property (readonly, nonatomic) VMUMutableClassInfo *unownedExtraDataLayout; // ivar: _unownedExtraDataLayout


-(id)initWithSwiftCore:(struct _CSTypeRef )arg0 memoryReader:(id)arg1 ;


@end


#endif