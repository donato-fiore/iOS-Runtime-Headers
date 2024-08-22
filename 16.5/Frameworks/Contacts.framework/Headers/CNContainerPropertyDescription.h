// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTAINERPROPERTYDESCRIPTION_H
#define CNCONTAINERPROPERTYDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNContainerPropertyDescription : NSObject

@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) Class valueClass;


-(*void)ABValueForABSource:(*void)arg0 ;
-(*void)ABValueFromCNValue:(id)arg0 ;
-(?)setABValue:(?)arg0 onABSourceerror;
-(BOOL)isConvertibleABValue:(*void)arg0 ;
-(BOOL)isValidValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValue:(id)arg0 equalToEmptyEquivalentOrValue:(id)arg1 ;
-(id)CNValueForContainer:(id)arg0 ;
-(id)CNValueFromABValue:(*void)arg0 ;
-(id)nilValue;
-(int)abPropertyID;
-(void)setCNValue:(id)arg0 onContainer:(id)arg1 ;


@end


#endif