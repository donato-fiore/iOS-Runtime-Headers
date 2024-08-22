// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSDISPATCHDATA_H
#define _NSDISPATCHDATA_H

@class NSData;



@interface _NSDispatchData : NSData



+(BOOL)supportsSecureCoding;
-(BOOL)_allowsDirectEncoding;
-(BOOL)_isDispatchData;
-(BOOL)_providesConcreteBacking;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)_createDispatchData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)subdataWithRange:(struct _NSRange )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateByteRangesUsingBlock:(id)arg0 ;
-(void)getBytes:(*void)arg0 ;
-(void)getBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)getBytes:(*void)arg0 range:(struct _NSRange )arg1 ;


@end


#endif