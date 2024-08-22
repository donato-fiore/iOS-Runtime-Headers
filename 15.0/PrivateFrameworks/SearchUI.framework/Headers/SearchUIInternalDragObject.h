// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIINTERNALDRAGOBJECT_H
#define SEARCHUIINTERNALDRAGOBJECT_H

@class NSString, NSArray;
@protocol NSItemProviderWriting;

#import <Foundation/Foundation.h>

#import "SearchUIRowModel.h"

@interface SearchUIInternalDragObject : NSObject <NSItemProviderWriting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) SearchUIRowModel *dragObject; // ivar: _dragObject
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


-(BOOL)shouldShareDragURL;
-(id)initWithDragObject:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;


@end


#endif