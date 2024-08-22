// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBDEVICEREQUEST_H
#define CBDEVICEREQUEST_H

@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBDeviceRequest : NSObject <CUXPCCodable>



@property (nonatomic) unsigned int requestFlags; // ivar: _requestFlags
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif