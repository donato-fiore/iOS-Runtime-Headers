// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTAINERUPDATE_H
#define CNCONTAINERUPDATE_H

@class NSString;
@protocol CNContainerUpdate;

#import <Foundation/Foundation.h>

#import "CNContainerPropertyDescription.h"

@interface CNContainerUpdate : NSObject <CNContainerUpdate>

 {
    CNContainerPropertyDescription *_property;
    id *_value;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)updateWithValue:(id)arg0 property:(id)arg1 ;
-(id)initWithProperty:(id)arg0 value:(id)arg1 ;
-(id)property;
-(id)value;
-(void)applyToMutableContainer:(id)arg0 ;


@end


#endif