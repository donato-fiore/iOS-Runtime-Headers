// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDEMBEDDING_H
#define GDEMBEDDING_H

@class NSArray, MLMultiArray;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDEmbedding : NSObject <NSCoding, NSSecureCoding>



@property (copy) NSArray *ids; // ivar: _ids
@property (copy) MLMultiArray *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 ids:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateIdsArrayWithIdentifier:(id)arg0 ;


@end


#endif