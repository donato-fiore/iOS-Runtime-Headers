// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPROPERTYRESTRICTION_H
#define CPROPERTYRESTRICTION_H

@protocol RestrictionProtocol;

#import <Foundation/Foundation.h>

#import "cbaseVariant.h"
#import "fullPropSpec.h"

@interface cPropertyRestriction : NSObject <RestrictionProtocol>



@property unsigned int lcid; // ivar: _lcid
@property (retain) cbaseVariant *prVal; // ivar: _prVal
@property (retain) fullPropSpec *propSpec; // ivar: _propSpec
@property unsigned int relOp; // ivar: _relOp
@property int restrictId; // ivar: restrictId
@property unsigned int ulType; // ivar: ulType
@property unsigned int weight; // ivar: weight


-(id)initWithRelop:(unsigned int)arg0 Weight:(unsigned int)arg1 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)restrictionNumber;
-(unsigned int)get_ultype;


@end


#endif