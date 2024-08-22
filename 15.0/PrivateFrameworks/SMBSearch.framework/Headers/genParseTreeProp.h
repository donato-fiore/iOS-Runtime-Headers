// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GENPARSETREEPROP_H
#define GENPARSETREEPROP_H

@protocol WspPropertyProtocol;

#import <Foundation/Foundation.h>

#import "cdbProp.h"
#import "cbaseVariant.h"

@interface genParseTreeProp : NSObject <WspPropertyProtocol>



@property (retain) cdbProp *cProps; // ivar: _cProps
@property (retain) cbaseVariant *variant; // ivar: _variant


-(id)initWithBool:(BOOL)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(unsigned int)propertyID;


@end


#endif