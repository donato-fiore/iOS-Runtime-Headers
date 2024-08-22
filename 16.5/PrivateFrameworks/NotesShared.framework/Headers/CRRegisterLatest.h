// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRREGISTERLATEST_H
#define CRREGISTERLATEST_H

@protocol CRDataType;


#import "CRRegister.h"
#import "CRTimestamp.h"

@interface CRRegisterLatest : CRRegister {
    id<CRDataType> *_contents;
}


@property (retain, nonatomic) CRTimestamp *timestamp; // ivar: _timestamp


-(BOOL)isEqualContents:(id)arg0 ;
-(id)contents;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)description;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 document:(id)arg1 ;
-(id)initWithContents:(id)arg0 timestamp:(id)arg1 document:(id)arg2 ;
-(id)initWithProtobufRegisterLatest:(*void)arg0 decoder:(id)arg1 ;
-(void)_setContents:(id)arg0 ;
-(void)encodeIntoProtobufRegisterLatest:(*void)arg0 coder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)mergeWithRegisterLatest:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setContents:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif