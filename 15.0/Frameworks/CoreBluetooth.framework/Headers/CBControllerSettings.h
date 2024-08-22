// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBCONTROLLERSETTINGS_H
#define CBCONTROLLERSETTINGS_H

@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBControllerSettings : NSObject <CUXPCCodable>



@property (nonatomic) char setupAssistantIfNoKeyboard; // ivar: _setupAssistantIfNoKeyboard
@property (nonatomic) char setupAssistantIfNoPointingDevice; // ivar: _setupAssistantIfNoPointingDevice


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif