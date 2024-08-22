// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VRXRESPONSE_H
#define VRXRESPONSE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface VRXResponse : NSObject

@property (readonly, nonatomic) NSData *model; // ivar: _model
@property (readonly, nonatomic) NSInteger responseType; // ivar: _responseType


-(id)initWithModel:(id)arg0 responseType:(NSInteger)arg1 ;


@end


#endif