// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSMACHPORT_H
#define LIVEFSMACHPORT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LiveFSMachPort : NSObject <NSSecureCoding>



@property (readonly) unsigned int machPort; // ivar: _machPort


+(BOOL)supportsSecureCoding;
+(id)newByCopyingPort:(unsigned int)arg0 ;
-(Class)classForCoder;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPort:(unsigned int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif