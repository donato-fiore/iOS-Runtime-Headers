// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFEEDVIEWCONTROLLERRESTORABLESTATE_H
#define PUFEEDVIEWCONTROLLERRESTORABLESTATE_H

@class NSArray, NSURL, NSDate;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface PUFeedViewControllerRestorableState : NSObject <NSCoding>



@property (copy, nonatomic) NSArray *centerAssetFrames; // ivar: _centerAssetFrames
@property (copy, nonatomic) NSArray *centerAssetUUIDs; // ivar: _centerAssetUUIDs
@property (copy, nonatomic) NSURL *centerSectionEntryURIRepresentation; // ivar: _centerSectionEntryURIRepresentation
@property (nonatomic) CGRect centerSectionFrame; // ivar: _centerSectionFrame
@property (nonatomic) CGSize collectionViewSize; // ivar: _collectionViewSize
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL scrolledToNewest; // ivar: _scrolledToNewest


-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif