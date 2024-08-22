// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSPASSSEARCHCONTROLLER_H
#define CKDETAILSPASSSEARCHCONTROLLER_H



#import "CKPassSearchController.h"
#import "CKPassSearchResultsCell.h"

@interface CKDetailsPassSearchController : CKPassSearchController

@property (retain, nonatomic) CKPassSearchResultsCell *sizingCell; // ivar: _sizingCell


+(id)sectionIdentifier;
-(id)layoutGroupWithEnvironment:(id)arg0 ;


@end


#endif