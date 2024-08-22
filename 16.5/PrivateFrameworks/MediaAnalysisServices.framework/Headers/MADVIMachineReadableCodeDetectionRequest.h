// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIMACHINEREADABLECODEDETECTIONREQUEST_H
#define MADVIMACHINEREADABLECODEDETECTIONREQUEST_H

@class NSArray;


#import "MADRequest.h"

@interface MADVIMachineReadableCodeDetectionRequest : MADRequest

@property (readonly, nonatomic) NSArray *symbologies; // ivar: _symbologies


+(BOOL)supportsSecureCoding;
+(NSUInteger)targetResolution;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbologies:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif