// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTUPLE_H
#define CRTUPLE_H

@class NSArray, NSString;
@protocol CRDataType, CRCoding;

#import <Foundation/Foundation.h>


@interface CRTuple : NSObject <CRDataType, CRCoding>



@property (retain, nonatomic) NSArray *contents; // ivar: _contents
@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tupleWithArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif