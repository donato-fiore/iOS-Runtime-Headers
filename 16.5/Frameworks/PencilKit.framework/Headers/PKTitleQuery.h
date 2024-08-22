// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTITLEQUERY_H
#define PKTITLEQUERY_H

@class NSString, CHTitleQuery;
@protocol CHQueryDelegate, PKTitleQueryDelegate;

#import <Foundation/Foundation.h>

#import "PKDrawing.h"

@interface PKTitleQuery : NSObject <CHQueryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTitleQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CHTitleQuery *titleQuery; // ivar: _titleQuery
@property (readonly, copy, nonatomic) NSString *transcribedTitle;


-(id)initWithDrawing:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)queryDidUpdateResult:(id)arg0 ;
-(void)start;


@end


#endif