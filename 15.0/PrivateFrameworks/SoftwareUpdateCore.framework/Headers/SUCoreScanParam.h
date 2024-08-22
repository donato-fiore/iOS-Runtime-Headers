// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCORESCANPARAM_H
#define SUCORESCANPARAM_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SUCoreDescriptor.h"

@interface SUCoreScanParam : NSObject <NSSecureCoding>



@property (retain, nonatomic) SUCoreDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) SUCoreDescriptor *fallbackDescriptor; // ivar: _fallbackDescriptor
@property (retain, nonatomic) SUCoreDescriptor *majorPrimaryDescriptor; // ivar: _majorPrimaryDescriptor
@property (retain, nonatomic) SUCoreDescriptor *majorSecondaryDescriptor; // ivar: _majorSecondaryDescriptor
@property (retain, nonatomic) SUCoreDescriptor *minorPrimaryDescriptor; // ivar: _minorPrimaryDescriptor
@property (retain, nonatomic) SUCoreDescriptor *minorSecondaryDescriptor; // ivar: _minorSecondaryDescriptor
@property (nonatomic) NSInteger resultCode; // ivar: _resultCode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 withFallbackDescriptor:(id)arg1 ;
-(id)initWithMajorPrimaryDescriptor:(id)arg0 majorSecondaryDescriptor:(id)arg1 minorPrimaryDescriptor:(id)arg2 minorSecondaryDescriptor:(id)arg3 ;
-(id)initWithResult:(NSInteger)arg0 withError:(id)arg1 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif