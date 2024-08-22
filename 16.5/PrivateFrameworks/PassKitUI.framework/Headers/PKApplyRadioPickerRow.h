// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYRADIOPICKERROW_H
#define PKAPPLYRADIOPICKERROW_H

@class NSString;
@protocol PKApplyCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyRadioPickerRow : NSObject <PKApplyCollectionViewRow>

 {
    NSString *_title;
    NSString *_submissionValue;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


-(Class)cellClass;
-(id)initWithTitle:(id)arg0 submissionValue:(id)arg1 ;
-(void)configureCell:(id)arg0 ;


@end


#endif