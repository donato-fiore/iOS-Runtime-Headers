// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXSHEETCONTEXT_H
#define EXSHEETCONTEXT_H

@class NSURL, NSString;
@protocol OCDDelayedNodeContext;

#import <Foundation/Foundation.h>

#import "EXReadState.h"

@interface EXSheetContext : NSObject <OCDDelayedNodeContext>

 {
    EXReadState *mSheetState;
    NSURL *mPackageLocation;
    NSString *mType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadDelayedNode:(id)arg0 ;
-(id)initWithSheetLocation:(id)arg0 sheetXmlType:(id)arg1 state:(id)arg2 ;


@end


#endif