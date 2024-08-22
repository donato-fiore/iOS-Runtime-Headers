// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCOURIERSERVERBAG_H
#define IDSCOURIERSERVERBAG_H



#import "IDSServerBag.h"

@interface IDSCourierServerBag : IDSServerBag



+(id)_bagCreationLock;
+(id)_sharedInstanceForClass:(Class)arg0 ;
+(id)sharedInstance;
-(NSUInteger)_bagDomain;
-(id)_bagDefaultsDomain;
-(id)init;


@end


#endif