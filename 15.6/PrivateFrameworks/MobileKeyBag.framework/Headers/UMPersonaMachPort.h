// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMPERSONAMACHPORT_H
#define UMPERSONAMACHPORT_H

@class NSMachPort;
@protocol NSSecureCoding;



@interface UMPersonaMachPort : NSMachPort <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif