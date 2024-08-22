// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISHOWPHOTOSONEUPVIEWHANDLER_H
#define SEARCHUISHOWPHOTOSONEUPVIEWHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUIShowPhotosOneUpViewHandler : SearchUICommandHandler



-(BOOL)supportsCopy;
-(NSUInteger)destination;
-(id)additionalActionMenuItems;
-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;
-(id)itemProviderForCopy;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif