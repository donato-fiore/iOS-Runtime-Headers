// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYPRIMARYACTIONROW_H
#define PKAPPLYPRIMARYACTIONROW_H

@class NSString;
@protocol PKApplyCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyPrimaryActionRow : NSObject <PKApplyCollectionViewRow>

 {
    NSString *_title;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) BOOL loading; // ivar: _loading
@property (readonly) Class superclass;


-(Class)cellClass;
-(id)initWithTitle:(id)arg0 ;
-(void)configureCell:(id)arg0 ;


@end


#endif