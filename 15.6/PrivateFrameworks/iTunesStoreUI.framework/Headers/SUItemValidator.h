// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUITEMVALIDATOR_H
#define SUITEMVALIDATOR_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface SUItemValidator : NSObject {
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}


@property (readonly, nonatomic) NSArray *validationTests;


-(BOOL)validateItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateItems:(id)arg0 offers:(id)arg1 error:(*id)arg2 ;
-(void)addCollectionValidationTests:(id)arg0 ;
-(void)addItemValidationTests:(id)arg0 ;
-(void)dealloc;
-(void)removeValidationTest:(id)arg0 ;


@end


#endif