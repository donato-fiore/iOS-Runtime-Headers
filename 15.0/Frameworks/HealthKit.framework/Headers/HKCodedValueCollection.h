// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODEDVALUECOLLECTION_H
#define HKCODEDVALUECOLLECTION_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying, HKCodedObject;

#import <Foundation/Foundation.h>


@interface HKCodedValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject>



@property (readonly, copy, nonatomic) NSArray *codedValues; // ivar: _codedValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)codedValueCollectionWithCodedValues:(id)arg0 ;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCodedValues:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif