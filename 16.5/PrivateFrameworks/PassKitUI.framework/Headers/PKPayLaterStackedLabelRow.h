// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERSTACKEDLABELROW_H
#define PKPAYLATERSTACKEDLABELROW_H

@class NSArray, NSString;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterStackedLabelRow : NSObject <PKPayLaterCollectionViewRow>

 {
    NSArray *_sources;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) CGFloat paddingBetweenRows; // ivar: _paddingBetweenRows
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(id)initWithSources:(id)arg0 ;
-(void)configureCell:(id)arg0 ;


@end


#endif