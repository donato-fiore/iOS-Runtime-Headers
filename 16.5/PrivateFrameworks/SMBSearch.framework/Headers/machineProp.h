// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MACHINEPROP_H
#define MACHINEPROP_H

@protocol WspPropertyProtocol;

#import <Foundation/Foundation.h>

#import "cdbProp.h"
#import "cbaseVariant.h"

@interface machineProp : NSObject <WspPropertyProtocol>



@property (retain) cdbProp *cProps; // ivar: _cProps
@property (retain) cbaseVariant *variant; // ivar: _variant


-(id)initWithServerMachine:(id)arg0 UseExtBTypes:(BOOL)arg1 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(unsigned int)propertyID;


@end


#endif