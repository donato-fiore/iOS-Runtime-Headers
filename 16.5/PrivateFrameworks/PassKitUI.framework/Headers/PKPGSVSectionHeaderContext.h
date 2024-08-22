// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPGSVSECTIONHEADERCONTEXT_H
#define PKPGSVSECTIONHEADERCONTEXT_H

@class UIView<PKPGSVSectionHeaderView>, NSArray;

#import <Foundation/Foundation.h>


@interface PKPGSVSectionHeaderContext : NSObject {
    UIView<PKPGSVSectionHeaderView> *_headerView;
    NSArray *_subheaderContexts;
    UIEdgeInsets _headerMargins;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(void)dealloc;


@end


#endif