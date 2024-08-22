// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCHOOSEFROMLISTARRAYCONTENTITEM_H
#define WFCHOOSEFROMLISTARRAYCONTENTITEM_H

@class WFContentItem, NSArray;



@interface WFChooseFromListArrayContentItem : WFContentItem

@property (readonly, nonatomic) NSArray *items;


+(id)itemWithItems:(id)arg0 named:(id)arg1 ;
+(id)itemWithObjects:(id)arg0 named:(id)arg1 ;
+(id)ownedTypes;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)allowedClassesForDecodingInternalRepresentations;


@end


#endif