// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSKERNEL_H
#define MPSKERNEL_H

@class NSString;
@protocol NSCopying, NSSecureCoding, MTLDevice;

#import <Foundation/Foundation.h>


@interface MPSKernel : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _verbosityLevel;
    *void _device;
    *void _library;
    NSString *_label;
    NSUInteger _labelHash;
    NSUInteger _allowedOptions;
    unsigned int _tuningParams;
    unsigned int _maxTuningParams;
    unsigned int _privateOptions;
}


@property (readonly, retain, nonatomic) NSObject<MTLDevice> *device;
@property (nonatomic) BOOL enableConcurrency; // ivar: _enableConcurrency
@property (nonatomic) unk fileVersion; // ivar: _fileVersion
@property (copy) NSString *label;
@property (nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)disableConcurrentEncoder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)sharedInitWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif