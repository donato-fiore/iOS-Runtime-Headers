// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDYNAMICLISTSTRING_H
#define HFDYNAMICLISTSTRING_H

@class NSString, NSArray;
@protocol HFStringGenerator;

#import <Foundation/Foundation.h>


@interface HFDynamicListString : NSObject <HFStringGenerator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *stringList; // ivar: _stringList
@property (copy, nonatomic) NSString *summaryFormat; // ivar: _summaryFormat
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *truncationFormat; // ivar: _truncationFormat


-(BOOL)prefersDynamicString;
-(id)attributeStringsSortedBySize:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dynamicStringForSize:(struct CGSize )arg0 attributes:(id)arg1 ;
-(id)initWithList:(id)arg0 truncationFormat:(id)arg1 summaryFormat:(id)arg2 ;
-(id)stringWithAttributes:(id)arg0 ;


@end


#endif