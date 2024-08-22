// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENFOLDER_H
#define ATXHOMESCREENFOLDER_H

@class NSMutableArray, NSString, NSArray;
@protocol ATXHomeScreenLeafIconRepresentable;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenFolder : NSObject <ATXHomeScreenLeafIconRepresentable>

 {
    NSMutableArray *_folderPages;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *folderPages;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenFolder:(id)arg0 ;
-(id)dictionaryRepresentationForIntrospection;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFolderPages:(id)arg0 name:(id)arg1 ;
-(void)addIcon:(id)arg0 folderPageIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateApps:(id)arg0 ;


@end


#endif