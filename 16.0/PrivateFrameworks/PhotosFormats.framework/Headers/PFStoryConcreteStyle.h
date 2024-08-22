// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTORYCONCRETESTYLE_H
#define PFSTORYCONCRETESTYLE_H

@class NSString;
@protocol PFStoryRecipeStyle;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteStyle : NSObject <PFStoryRecipeStyle>



@property (readonly, nonatomic) NSInteger customColorGradeKind; // ivar: _customColorGradeKind
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCustomized; // ivar: _isCustomized
@property (readonly, nonatomic) NSString *originalColorGradeCategory; // ivar: _originalColorGradeCategory
@property (readonly, nonatomic) NSString *songAssetIdentifier; // ivar: _songAssetIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStyle:(id)arg0 ;
-(id)init;


@end


#endif