// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTGRIDITEM_H
#define SASTGRIDITEM_H

@class NSString, NSArray;
@protocol SASTTemplateItem;


#import "AceObject.h"

@interface SASTGridItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *gridCells;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)gridItem;
+(id)gridItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif