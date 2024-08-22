// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCOERCIONRESTRICTION_H
#define CCOERCIONRESTRICTION_H

@protocol RestrictionProtocol;

#import <Foundation/Foundation.h>


@interface cCoercionRestriction : NSObject <RestrictionProtocol>



@property int cop; // ivar: _cop
@property unsigned int fValue; // ivar: _fValue
@property int restrictId; // ivar: restrictId
@property (retain) NSObject<RestrictionProtocol> *restrictionObj; // ivar: _restrictionObj
@property unsigned int ulType; // ivar: ulType
@property unsigned int weight; // ivar: weight


-(id)initWithOp:(int)arg0 FValue:(unsigned int)arg1 Weight:(unsigned int)arg2 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)restrictionNumber;
-(unsigned int)get_ultype;
-(void)setRestriction:(id)arg0 ;


@end


#endif