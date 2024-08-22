// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODEREPOSITORY_H
#define DNDSMODEREPOSITORY_H

@class NSString;
@protocol DNDSModeRepository;

#import <Foundation/Foundation.h>


@interface DNDSModeRepository : NSObject <DNDSModeRepository>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)modeDetailsForIdentifiers:(id)arg0 ;


@end


#endif