// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLVECTOR_H
#define APODMLVECTOR_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APOdmlVector : NSObject <NSSecureCoding>

 {
    *float _dataPtr;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned int length; // ivar: _length
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(*float)_createDataPtrFromArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)dotProduct:(id)arg0 ;
-(float)magnitude;
-(id)_initWithVersion:(id)arg0 length:(unsigned int)arg1 rawMallocedFloats:(*float)arg2 ;
-(id)arrayOfNumbers;
-(id)cosineSimilarity:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithVersion:(id)arg0 andArray:(id)arg1 ;
-(id)initWithVersion:(id)arg0 data:(id)arg1 ;
-(id)initWithVersion:(id)arg0 length:(unsigned int)arg1 floats:(*float)arg2 ;
-(id)scalarMultiply:(float)arg0 ;
-(id)vectorAdd:(id)arg0 ;
-(id)vectorSubtract:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setArrayOfNumber:(id)arg0 ;


@end


#endif