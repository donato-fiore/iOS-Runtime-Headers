// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHNODECOLLECTION_H
#define PGGRAPHNODECOLLECTION_H

@class MANodeCollection;



@interface PGGraphNodeCollection : MANodeCollection



+(Class)nodeClass;
+(id)filter;
+(id)nodesInGraph:(id)arg0 ;
+(id)subsetInCollection:(id)arg0 ;
-(id)initWithSubsetInGraph:(id)arg0 elementIdentifiers:(id)arg1 ;


@end


#endif