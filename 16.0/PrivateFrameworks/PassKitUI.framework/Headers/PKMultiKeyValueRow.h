// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMULTIKEYVALUEROW_H
#define PKMULTIKEYVALUEROW_H

@class NSArray, NSString;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKMultiKeyValueRow : NSObject <PKPayLaterCollectionViewRow>

 {
    NSArray *_sources;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initKeyValueSources:(id)arg0 ;
-(void)configureCell:(id)arg0 ;


@end


#endif