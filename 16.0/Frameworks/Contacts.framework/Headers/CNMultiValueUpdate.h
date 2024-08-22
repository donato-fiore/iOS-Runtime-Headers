// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMULTIVALUEUPDATE_H
#define CNMULTIVALUEUPDATE_H

@class NSString;
@protocol CNMultiValueUpdate_iOSAB;

#import <Foundation/Foundation.h>


@interface CNMultiValueUpdate : NSObject <CNMultiValueUpdate_iOSAB>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreIdentifiers; // ivar: _ignoreIdentifiers
@property (readonly) Class superclass;


+(id)addValue:(id)arg0 ;
+(id)removeValue:(id)arg0 ;
+(id)reorderValues:(id)arg0 ;
+(id)replaceValue:(id)arg0 withValue:(id)arg1 ;
-(BOOL)applyToABPerson:(*void)arg0 abmultivalue:(*void)arg1 propertyDescription:(id)arg2 isUnified:(BOOL)arg3 logger:(id)arg4 error:(*id)arg5 ;
-(NSInteger)multiValueIndexForValue:(id)arg0 inMultiValue:(*void)arg1 identifier:(*id)arg2 ;
-(void)applyToMutableMultiValue:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif