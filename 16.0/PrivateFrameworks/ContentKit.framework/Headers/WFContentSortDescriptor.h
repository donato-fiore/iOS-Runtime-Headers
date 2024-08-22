// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTSORTDESCRIPTOR_H
#define WFCONTENTSORTDESCRIPTOR_H

@class NSSet;
@protocol WFContentPropertyContainer;

#import <Foundation/Foundation.h>

#import "WFContentProperty.h"

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, copy, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, nonatomic) NSSet *containedProperties;
@property (readonly, nonatomic) WFContentProperty *property; // ivar: _property


+(id)randomSortDescriptor;
+(id)sortDescriptorWithProperty:(id)arg0 ascending:(BOOL)arg1 comparator:(id)arg2 ;
-(id)description;
-(id)initWithProperty:(id)arg0 ascending:(BOOL)arg1 comparator:(id)arg2 ;


@end


#endif