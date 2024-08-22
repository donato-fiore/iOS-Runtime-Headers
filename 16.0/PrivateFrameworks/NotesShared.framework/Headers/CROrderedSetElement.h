// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRORDEREDSETELEMENT_H
#define CRORDEREDSETELEMENT_H

@class NSString;
@protocol CRDataType, NSCopying, CREquatable, CRDataType><CRCoding;

#import <Foundation/Foundation.h>

#import "CRRegisterLatest.h"

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRRegisterLatest *index; // ivar: _index
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CRDataType><CRCoding> *value; // ivar: _value


+(id)temporaryElementWithValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)initWithProtobufSetElement:(*void)arg0 decoder:(id)arg1 ;
-(id)tombstone;
-(void)encodeIntoProtobufSetElement:(*void)arg0 coder:(id)arg1 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif