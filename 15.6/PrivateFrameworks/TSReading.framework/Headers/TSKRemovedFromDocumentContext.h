// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKREMOVEDFROMDOCUMENTCONTEXT_H
#define TSKREMOVEDFROMDOCUMENTCONTEXT_H


#import <Foundation/Foundation.h>


@interface TSKRemovedFromDocumentContext : NSObject



+(id)hidingContext;
+(id)movingContext;
-(BOOL)wasHidden;
-(BOOL)wasMoved;
-(id)undoContext;


@end


#endif