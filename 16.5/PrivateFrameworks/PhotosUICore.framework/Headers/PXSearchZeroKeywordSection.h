// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHZEROKEYWORDSECTION_H
#define PXSEARCHZEROKEYWORDSECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXSearchZeroKeywordSection : NSObject

@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)description;
-(id)initWithType:(NSInteger)arg0 viewModels:(id)arg1 ;
-(void)removeItem:(id)arg0 ;


@end


#endif