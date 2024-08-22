// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLIST_H
#define CPLIST_H

@protocol CPDisposable;

#import <Foundation/Foundation.h>

#import "CPParagraphListItem.h"

@interface CPList : NSObject <CPDisposable>

 {
    *__CFArray items;
}


@property (nonatomic) unsigned int ordinalPrefixLength; // ivar: ordinalPrefixLength
@property (nonatomic) unsigned int ordinalSuffixLength; // ivar: ordinalSuffixLength
@property (retain, nonatomic) CPParagraphListItem *parentItem; // ivar: parentItem
@property (nonatomic) CGRect spacer; // ivar: spacer
@property (nonatomic) int type; // ivar: type


-(BOOL)containsParagraph:(id)arg0 ;
-(BOOL)isMultilevel;
-(id)init;
-(id)itemAtIndex:(unsigned int)arg0 ;
-(unsigned int)itemCount;
-(void)addItem:(id)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;


@end


#endif