// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUFACTOIDVIEWMODEL_H
#define MUFACTOIDVIEWMODEL_H

@class NSString;
@protocol MUFactoidViewModel;

#import <Foundation/Foundation.h>


@interface MUFactoidViewModel : NSObject <MUFactoidViewModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *valueString;


+(id)viewModelForFactoid:(id)arg0 ;
+(id)viewModelsFromFactoids:(id)arg0 ;
-(id)buildSymbolWithFont:(id)arg0 ;


@end


#endif