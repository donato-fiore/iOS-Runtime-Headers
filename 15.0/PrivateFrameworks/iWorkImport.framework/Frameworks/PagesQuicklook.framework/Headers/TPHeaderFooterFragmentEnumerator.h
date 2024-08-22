// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPHEADERFOOTERFRAGMENTENUMERATOR_H
#define TPHEADERFOOTERFRAGMENTENUMERATOR_H

@class NSEnumerator;


#import "TPSectionTemplatePage.h"

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator

@property (nonatomic) NSInteger fragmentIndex; // ivar: _fragmentIndex
@property (nonatomic) NSInteger headerFooterType; // ivar: _headerFooterType
@property (retain, nonatomic) TPSectionTemplatePage *pageMaster; // ivar: _pageMaster


-(id)initWithPageMaster:(id)arg0 ;
-(id)nextObject;
-(void)p_incrementFragmentIndex;
-(void)p_incrementHeaderFooterType;


@end


#endif