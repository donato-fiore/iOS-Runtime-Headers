// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERIMAGEROW_H
#define PKPAYLATERIMAGEROW_H

@class UIImage, NSString;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterImageRow : NSObject <PKPayLaterCollectionViewRow>

 {
    UIImage *_image;
}


@property (nonatomic) NSDirectionalEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(id)initWithImage:(id)arg0 ;
-(void)configureCell:(id)arg0 ;


@end


#endif