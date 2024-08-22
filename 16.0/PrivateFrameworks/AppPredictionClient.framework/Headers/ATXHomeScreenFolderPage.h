// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENFOLDERPAGE_H
#define ATXHOMESCREENFOLDERPAGE_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenFolderPage : NSObject <NSSecureCoding>

 {
    NSMutableArray *_contents;
}


@property (readonly, copy, nonatomic) NSArray *contents;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenFolderPage:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentationForIntrospection;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 ;
-(void)addIcon:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif