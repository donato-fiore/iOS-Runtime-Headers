// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENSCANINSTANCE_H
#define ENSCANINSTANCE_H

@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface ENScanInstance : NSObject <CUXPCCodable>



@property (nonatomic) unsigned char minimumAttenuation; // ivar: _minimumAttenuation
@property (nonatomic) NSInteger secondsSinceLastScan; // ivar: _secondsSinceLastScan
@property (nonatomic) unsigned char typicalAttenuation; // ivar: _typicalAttenuation


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif