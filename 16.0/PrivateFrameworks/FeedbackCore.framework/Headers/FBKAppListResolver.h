// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKAPPLISTRESOLVER_H
#define FBKAPPLISTRESOLVER_H

@class NSArray;
@protocol FBKChoiceSetResolverProtocol;

#import <Foundation/Foundation.h>


@interface FBKAppListResolver : NSObject <FBKChoiceSetResolverProtocol>



@property (nonatomic) BOOL didFetch; // ivar: _didFetch
@property (retain, nonatomic) NSArray *prefetchedChoices; // ivar: _prefetchedChoices


+(id)displayValueForChoiceValue:(id)arg0 ;
-(id)choices;
-(id)initWithServerSideChoices:(id)arg0 ;
-(void)prefetchChoices;


@end


#endif