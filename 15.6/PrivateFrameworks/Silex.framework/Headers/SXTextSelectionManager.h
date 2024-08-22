// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTSELECTIONMANAGER_H
#define SXTEXTSELECTIONMANAGER_H

@class NSString, NSHashTable;
@protocol SXTextSelectionManager;

#import <Foundation/Foundation.h>


@interface SXTextSelectionManager : NSObject <SXTextSelectionManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *textSelecting; // ivar: _textSelecting


-(id)init;
-(void)addTextSelecting:(id)arg0 ;
-(void)clearSelection;


@end


#endif