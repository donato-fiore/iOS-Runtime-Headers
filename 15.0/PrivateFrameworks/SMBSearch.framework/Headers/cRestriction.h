// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRESTRICTION_H
#define CRESTRICTION_H

@protocol RestrictionProtocol;

#import <Foundation/Foundation.h>


@interface cRestriction : NSObject <RestrictionProtocol>



@property int restrictId; // ivar: restrictId
@property (retain) NSObject<RestrictionProtocol> *restrictionObj; // ivar: _restrictionObj
@property unsigned int ulType; // ivar: ulType
@property unsigned int weight; // ivar: weight


-(id)initWithType:(unsigned int)arg0 Weight:(unsigned int)arg1 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(void)setRestriction:(id)arg0 ;


@end


#endif