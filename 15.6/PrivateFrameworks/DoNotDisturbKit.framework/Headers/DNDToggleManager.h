// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDTOGGLEMANAGER_H
#define DNDTOGGLEMANAGER_H

@class DNDModeAssertionService, DNDStateService, NSString;

#import <Foundation/Foundation.h>


@interface DNDToggleManager : NSObject {
    DNDModeAssertionService *_modeAssertionService;
    DNDStateService *_stateService;
}


@property (copy, nonatomic) NSString *toggleAssertionIdentifier; // ivar: _toggleAssertionIdentifier


+(id)managerForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)_toggleDNDOffReturningError:(*id)arg0 ;
-(BOOL)_toggleDNDOnReturningError:(*id)arg0 ;
-(BOOL)toggleToTargetState:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithModeAssertionService:(id)arg0 stateService:(id)arg1 ;


@end


#endif