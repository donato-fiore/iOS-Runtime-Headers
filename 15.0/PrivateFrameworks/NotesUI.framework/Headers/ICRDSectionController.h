// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRDSECTIONCONTROLLER_H
#define ICRDSECTIONCONTROLLER_H

@class _UIDiffableDataSourceOutlineSectionController;

#import <Foundation/Foundation.h>


@interface ICRDSectionController : NSObject

@property (readonly, nonatomic) _UIDiffableDataSourceOutlineSectionController *outlineSectionController; // ivar: _outlineSectionController
@property (readonly, nonatomic) NSUInteger sectionControllerType; // ivar: _sectionControllerType


-(id)initWithDiffableDataSource:(id)arg0 sectionControllerType:(NSUInteger)arg1 ;
-(id)snapshotForSection:(id)arg0 ;


@end


#endif