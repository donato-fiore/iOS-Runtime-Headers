// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTBOOKMARKAPPLICATOR_H
#define SXCOMPONENTBOOKMARKAPPLICATOR_H

@class NSString;
@protocol SXBookmarkApplicator, SXScrollPositionRestoring;

#import <Foundation/Foundation.h>


@interface SXComponentBookmarkApplicator : NSObject <SXBookmarkApplicator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXScrollPositionRestoring> *scrollPositionRestoring; // ivar: _scrollPositionRestoring
@property (readonly) Class superclass;


-(id)initWithScrollPositionRestoring:(id)arg0 ;
-(void)applyBookmark:(id)arg0 ;


@end


#endif