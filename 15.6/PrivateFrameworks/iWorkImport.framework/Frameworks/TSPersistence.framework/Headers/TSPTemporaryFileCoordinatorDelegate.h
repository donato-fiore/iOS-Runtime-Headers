// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPTEMPORARYFILECOORDINATORDELEGATE_H
#define TSPTEMPORARYFILECOORDINATORDELEGATE_H

@class NSURL, NSString;
@protocol TSPFileCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)performReadUsingAccessor:(id)arg0 ;


@end


#endif