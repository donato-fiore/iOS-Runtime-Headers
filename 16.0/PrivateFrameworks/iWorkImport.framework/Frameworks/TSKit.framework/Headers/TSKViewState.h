// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKVIEWSTATE_H
#define TSKVIEWSTATE_H

@class TSPObject, TSPDocumentRevision;


#import "TSKViewStateRoot.h"

@interface TSKViewState : TSPObject

@property (copy, nonatomic) TSPDocumentRevision *documentRevision; // ivar: _documentRevision
@property (retain, nonatomic) TSKViewStateRoot *viewStateRoot; // ivar: _viewStateRoot


-(id)initWithContext:(id)arg0 viewStateRoot:(id)arg1 ;
-(id)packageLocator;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif