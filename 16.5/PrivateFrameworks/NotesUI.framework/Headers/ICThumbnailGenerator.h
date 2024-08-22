// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILGENERATOR_H
#define ICTHUMBNAILGENERATOR_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface ICThumbnailGenerator : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext


-(id)initWithManagedObjectContext:(id)arg0 ;
-(void)generateThumbnailWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif